#include <iostream>
#include <vector>

#define N 1000 // Taille des matrices

std::vector<std::vector<int>> multiplyMatrices(const std::vector<std::vector<int>> &a, const std::vector<std::vector<int>> &b)
{
    std::vector<std::vector<int>> c(N, std::vector<int>(N, 0));

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