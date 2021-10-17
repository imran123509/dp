#include<bits/stdc++.h>
using namespace std;

 vector<int> coins {1,5,7};
 int dp[100005];
 ll min_coins(int i){
 	ll ans=INT_MAX;
 
 	if(i==0) return 0;
	 if(dp[i] !=-1) return dp[i];
	 for(int j=0; j<coins.size(); j++){
	 ans=min(ans, 1+min_coins(i-coins[j]));
	 dp[i]=ans;
	 }
	 return dp[i];
	 
 }
 int main(){
 	memset(dp,-1, sizeof dp);
	 cout<<min_coins(11)<<endl;
 }