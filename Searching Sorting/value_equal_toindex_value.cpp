// Find a Fixed Point (Value equal to index) in a given array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int flag =0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == i + 1)
        {
            flag =1;
            cout <<( i + 1);
            
        }
    }
    if(flag==0)
    {
        cout<<"not found";
    }
    return 0;
}