// Search an element in a matriix

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, x, flag = 0;
    ;
    cin >> r >> c >> x;
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == x)
                flag = true;
        }
    }
    if (flag == true)
        cout << "true";
    else
        cout << "false";

     return 0;
}