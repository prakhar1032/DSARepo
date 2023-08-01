
#include <bits/stdc++.h>
using namespace std;

// left to right
void solveltr(string &s, char x, int i, int &ans)
{
    if (i>=s.size())
    {
        return;
    }
    if (s[i] == x)
    {
        ans = i;
    }
    solveltr(s,x,i+1,ans);
}

// right to left
void solvertl(string &s, char x, int i, int &ans)
{
    if (i < 0)
    {
        return;
    }
    if (s[i] == x)
    {
        ans = i;
        return;
    }
    solvertl(s,x,i-1,ans);
}

int main()
{
    string s;
    cin >> s;
    char x;
    cin >> x;
    int ans;
    solveltr(s, x, 0, ans);
    cout<<ans;
    return 0;
}