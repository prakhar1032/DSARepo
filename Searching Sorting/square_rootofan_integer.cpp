// square root of an integer#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (i * i < n)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}