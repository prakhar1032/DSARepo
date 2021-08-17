#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;

    bool chek = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
            chek = 0;
        break;
    }

    if (chek == true)
        cout << "palindrome";
    else
        cout << "not palindrome";

    return 0;
}
