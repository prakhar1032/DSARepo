#include <iostream>
using namespace std;
int main()
{
    int n, target;
    cin >> n >> target;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "[" << i << "," << j << "]";
            }
        }
    }

    return 0;
}