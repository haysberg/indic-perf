#include <iostream>
#include <vector>
#include <cstring>
#include <sys/ioctl.h>
#include <linux/perf_event.h>
#include <asm/unistd.h>
#include <unistd.h>
#include <fcntl.h>

#define N 1000 // Taille des matrices

static long perf_event_open(struct perf_event_attr *hw_event, pid_t pid, int cpu, int group_fd, unsigned long flags)
{
    int ret;
    ret = syscall(__NR_perf_event_open, hw_event, pid, cpu, group_fd, flags);
    return ret;
}

std::vector<std::vector<int>> multiplyMatrices(const std::vector<std::vector<int>> &a, const std::vector<std::vector<int>> &b)
{
    std::vector<std::vector<int>> c(N, std::vector<int>(N, 0));

    // Event for CPU cycles
    struct perf_event_attr pe_cycles;
    memset(&pe_cycles, 0, sizeof(struct perf_event_attr));
    pe_cycles.type = PERF_TYPE_HARDWARE;
    pe_cycles.size = sizeof(struct perf_event_attr);
    pe_cycles.config = PERF_COUNT_HW_CPU_CYCLES;
    pe_cycles.disabled = 1;
    pe_cycles.exclude_kernel = 1;
    pe_cycles.exclude_hv = 1;

    int fd_cycles = perf_event_open(&pe_cycles, 0, -1, -1, 0);
    if (fd_cycles == -1)
    {
        std::cerr << "Error in perf_event_open: " << strerror(errno) << std::endl;
        exit(EXIT_FAILURE);
    }

    // Event for instructions
    struct perf_event_attr pe_instructions;
    memset(&pe_instructions, 0, sizeof(struct perf_event_attr));
    pe_instructions.type = PERF_TYPE_HARDWARE;
    pe_instructions.size = sizeof(struct perf_event_attr);
    pe_instructions.config = PERF_COUNT_HW_INSTRUCTIONS;
    pe_instructions.disabled = 1;
    pe_instructions.exclude_kernel = 1;
    pe_instructions.exclude_hv = 1;

    int fd_instructions = perf_event_open(&pe_instructions, 0, -1, -1, 0);
    if (fd_instructions == -1)
    {
        std::cerr << "Error in perf_event_open: " << strerror(errno) << std::endl;
        exit(EXIT_FAILURE);
    }

    ioctl(fd_cycles, PERF_EVENT_IOC_RESET, 0);
    ioctl(fd_cycles, PERF_EVENT_IOC_ENABLE, 0);

    ioctl(fd_instructions, PERF_EVENT_IOC_RESET, 0);
    ioctl(fd_instructions, PERF_EVENT_IOC_ENABLE, 0);

    // Multiplication of matrices
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    ioctl(fd_cycles, PERF_EVENT_IOC_DISABLE, 0);
    long long count_cycles;
    read(fd_cycles, &count_cycles, sizeof(long long));

    ioctl(fd_instructions, PERF_EVENT_IOC_DISABLE, 0);
    long long count_instructions;
    read(fd_instructions, &count_instructions, sizeof(long long));

    std::cout << "Nombre de cycles CPU utilisés pour la multiplication des matrices: " << count_cycles << std::endl;
    std::cout << "Nombre d'instructions utilisées pour la multiplication des matrices: " << count_instructions << std::endl;

    close(fd_cycles);
    close(fd_instructions);
    return c;
}

int main()
{
    std::vector<std::vector<int>> a(N, std::vector<int>(N, 1)); // Initialisation de la matrice a avec des 1
    std::vector<std::vector<int>> b(N, std::vector<int>(N, 2)); // Initialisation de la matrice b avec des 2

    std::vector<std::vector<int>> c = multiplyMatrices(a, b); // Multiplication des deux matrices

    // Afficher la première valeur pour vérifier que le programme fonctionne correctement
    std::cout << "Première valeur de la matrice résultante: " << c[0][0] << std::endl;

    return 0;
}