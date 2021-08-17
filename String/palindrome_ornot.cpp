#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int s = 0, l = str.length() - 1;
    for (int i = str.length() - 1; i >= 0; i--)
    {

        if (str[s++] != str[l--])
        {
            return 0;
        }
    }
    cout << "yes";
    return 0;
}
