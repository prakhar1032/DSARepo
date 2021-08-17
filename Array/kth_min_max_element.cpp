#include <bits/stdc++.h>
using namespace std;
int kth_element(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << kth_element(arr, n, k);

    return 0;
}