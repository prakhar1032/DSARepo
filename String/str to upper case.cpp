#include <bits/stdc++.h>
using namespace std;

int main()
{
     string str = "enghipsngu";

     //     cout<<'b'-'B';

     transform(str.begin(), str.end(), str.begin(), ::toupper);
     cout << str << endl;


     transform(str.begin(), str.end(), str.begin(), ::tolower);
     cout << str << endl;
     return 0;
}
