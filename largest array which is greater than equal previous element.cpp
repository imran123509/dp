#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, vector<int>&dp){
	int ans=1;

	for(int i=1; i<a.size(); i++){
		if(a[i-1]<a[i]){
			dp[i] +=dp[i-1];
		}
		ans +=dp[i];
	}
	return ans;
}	
int main(){
	vector<int> a={1,4,2,3},dp(6,1);
	cout<<solve(a,dp);
}