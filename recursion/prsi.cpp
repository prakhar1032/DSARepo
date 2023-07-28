#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> v;
    vector<int> sub(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sub[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(sub[i]==0)
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    
    return 0;
}