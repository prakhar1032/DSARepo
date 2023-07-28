#include <bits/stdc++.h>
using namespace std;

int main()
{

unordered_map<int,int> mp;
vector<int> v = {1,2,3,3,4,5,1,2};

for(int i=0;i<v.size();i++){
    mp[v[i]]++;
}

// for(int i=0;i<v.size();i++){
    cout<<mp[v[2]]<<endl;
// }
    return 0;
}