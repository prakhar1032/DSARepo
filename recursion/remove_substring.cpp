
#include <bits/stdc++.h>
using namespace std;
// using recursion
string solve(string &s, string &part)
{
    int found = s.find(part);
    if (found != string::npos)
    {
        string left_part = s.substr(0, found);
        string right_part = s.substr(found + part.size(), s.size());
        s = left_part + right_part;

        solve(s, part);
    }
    else
    {
        return s;
    }
}

int main()
{
    string s;
    string part;

    cin >> s;
    cin >> part;

    cout << solve(s, part);

    return 0;
}
