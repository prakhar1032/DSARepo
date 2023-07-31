// Coin Change
// Medium
// 17K
// 381
// Companies
// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

// Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

// You may assume that you have an infinite number of each kind of coin.

 // Example 1:

// Input: coins = [1,2,5], amount = 11
// Output: 3
// Explanation: 11 = 5 + 5 + 1


# include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int target){
if(target ==0){
    return 0;
}
if(target<0){
    return INT_MAX;
}

// solve 1st case
int mini = INT_MAX;
for(int i=0;i<arr.size();i++){
    int ans = solve(arr,target-arr[i]);
    if(ans != INT_MAX){
mini = min(mini,ans+1);
    }
}
return mini;

}
int main(){
 vector<int> arr{1,2,3};
 int target = 5;
 int ans = solve(arr,target); 
 cout<<ans;
 return 0;

}