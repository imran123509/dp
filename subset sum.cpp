#include<bits/stdc++.h>
using namespace std;
long long target_sum(vector<int> &arr, int target){
	int n=arr.size();
		vector<vector<bool>>dp(n+1, vector<bool>(target+1, false));
		dp[0][0]=true;
		for(int i=1; i<=n; i++){
			dp[i][0]=true;
		}
		for(int i=1; i<=n; i++){
			for(int j=1; j<=target; j++){
				dp[i][j]=dp[i-1][j];
				if(arr[i-1]<=j){
					dp[i][j]=dp[i][j] or dp[i-1][j-arr[i-1]];
				}
			}
		}
		return dp[n][target];
}
int main(){

    vector<int> a={3,34,4,5,2};
	int target=30;
	cout<<target_sum(a, target)<<endl;

}
