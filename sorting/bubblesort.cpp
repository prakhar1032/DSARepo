#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 12;
    int arr[n] = {1, 3, 2, 4, 7, 6, 5, 8, 9, 0, -2, 10};
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {

            if (arr[j + 1] < arr[j])
            {
                swap(arr[j + 1], arr[j]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }

    // for printing
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }
    return 0;
}