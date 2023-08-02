#include <bits/stdc++.h>
using namespace std;
bool solve(string &s,int start,int end){
     if(start>=end){
        return true;
     }
     if(s[start]!=s[end]){
        return false;
     }
     return solve(s,start+1,end-1);
}



int main(){
string s;
cin>>s;
cout<<solve(s,0,s.size()-1);
}