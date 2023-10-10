#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 10;
    int arr[n] = {1, 3, 2, 4, 7, 6, 5, 8, 9, 0};
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }

    // for printing
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }

    return 0;
}