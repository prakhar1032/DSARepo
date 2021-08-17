// Maximum and minimum of an array using minimum number of comparisons
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //normal approach
    
    /*int a, b, c;
    cin >> a >> b >> c;
    if (a < b && a > c || a > b && a < c)
    {
        cout <<a;
    }
    else if (b < a && b > c || b > a && b < c)
    {
        cout <<b;
    }
    else if (c < a && c > b || c > a && c < b)
    {
        cout <<c;
    }*/

    //using array

    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cout<<arr[1];


    return 0;
}