#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 12;
    int arr[n] = {1, 3, 2, 4, 7, 6, 5, 8, 9, 0, -2, 10};

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    // for printing
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }
    return 0;
}