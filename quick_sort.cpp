#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

void quickSort(std::vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    std::srand(std::time(0));
    std::vector<int> arr(10000);
    for (int &i : arr)
        i = std::rand() % 10000;

    quickSort(arr, 0, arr.size() - 1);

    return 0;
}
