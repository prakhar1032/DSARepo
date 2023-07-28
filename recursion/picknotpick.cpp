#include <bits/stdc++.h>
using namespace std;
int main(){
int b;
cin>>b;
int ans = INT_MIN;
int j,t,sum;
cin>>j>>t;
int arrj[j],arrt[t];
for(int i=0;i<j;i++){
    cin>>arrj[i];
}
for(int i=0;i<t;i++){
    cin>>arrt[i];
}
for(int i=0;i<j;i++)
{
    for(int j=0;j<t;j++){
        sum = arrj[i]+arrt[j];
        if(sum<=b)
        ans = max(ans,sum);

    }
}
if(ans<=b)
cout<<ans;
else
return -1;
}