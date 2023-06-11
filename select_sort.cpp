#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

void selectionSort(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        std::swap(arr[min_idx], arr[i]);
    }
}

int main()
{
    std::srand(std::time(0));
    std::vector<int> arr(10000);
    for (int &i : arr)
        i = std::rand() % 10000;

    selectionSort(arr);

    return 0;
}
