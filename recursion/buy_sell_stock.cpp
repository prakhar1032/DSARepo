#include <bits/stdc++.h>
using namespace std;

// recursive approach
void solve(vector<int>& prices , int i,int &minprice , int &maxprofit){
    // basecase
    if(i>=prices.size()){
        return;
    }
    if(prices[i]<minprice) minprice = prices[i];
    int profit = prices[i] - minprice;
    if(profit>maxprofit) maxprofit = profit;

    // re
    solve(prices,i+1,minprice,maxprofit);

}


int main(){
vector<int> prices = {7,6,4,3,1};
        int minprice = INT_MAX;
        int maxprofit = INT_MIN;
        solve(prices,0,minprice,maxprofit);
        cout<<maxprofit;
        return maxprofit;

}