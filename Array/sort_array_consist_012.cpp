#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[],int n)
{
    int lo=0;
    int mid=0;
    int hi=n-1;
     int choice;
    while (mid<=hi)
    {choice = arr[mid];
        switch (arr[mid])
        {
            case 0:
            swap(arr[lo++],arr[mid++]);
            break;

            case 1:
            mid++;
            break;

            case 2:
            swap(arr[mid++],arr[hi--]);
            break;
            
        }
    }
}


int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

sort012(arr,n);

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}