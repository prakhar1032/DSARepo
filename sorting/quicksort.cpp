#include <bits/stdc++.h>
using namespace std;
// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high)
{
    // Choosing the pivot
    int pivot = arr[high];

    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {

        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {

            // Increment index of smaller element
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        // pi is partitioning index, arr[p]
        // is now at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n = 12;
    int arr[n] = {1, 3, 2, 4, 7, 6, 5, 8, 9, 0, -2, 10};
    quickSort(arr, 0, n - 1);

    // for printing
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }
    return 0;
}