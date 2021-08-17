// Find first and last positions of an element in a sorted array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a1 = 0, a2 = 0;
    
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            a1 = i;
            break;
        }
    }
    
    
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == x)
        {
            a2 = i;
            break;
        }
    }
    cout<<a1<<" "<<a2;

    return 0;
}