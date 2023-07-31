// maximum sum of non-adjecent elements

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int i, int sum, int &maxi)
{

    // base case
    if (i >= arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }

    // include
    solve(arr, i + 2, sum + arr[i], maxi);

    // exclude
    solve(arr, i + 1, sum, maxi);
}

int main()
{
    vector<int> arr{2, 1, 9, 4};
    int sum = 0;
    int i = 0;
    int maxi = INT_MIN;
    solve(arr, i, sum, maxi);
    cout << "answer is " << maxi;
    return 0;
}