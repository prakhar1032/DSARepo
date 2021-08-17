// A Program to check if strings are rotations of each other or not
// string::npos = 

#include <bits/stdc++.h> 
using namespace std;
bool rotation(string str1, string str2)
{
    if (str1.length() != str2.length())

        return false;

    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    if (rotation(str1, str2))
    {
        cout << "rotation of each other";
    }
    else
    {
        cout << "are not rotation of each other";
    }

    return 0;
}