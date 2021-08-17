#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s = "213476098";
    sort(s.begin(), s.end(),greater<int>());
    cout << s;

    return 0;
}