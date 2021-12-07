#include<bits/stdc++.h>
using namespace std;
int main(){
/*
recursion relation
c(n, n) =1;
c(n,0) =1;
c(0, r)=0;
c(n<r)=0;
*/
int n, r;
cin>>n>>r;
int dp[n+1][r+1];
for(int i=0; i<=n; i++) dp[i][0]=1;
for(int i=1; i<=r; i++) dp[0][i]=0;
for(int i=1; i<=n; i++){
	for(int j=1; j<=r; j++){
		if(i<j){
			dp[i][j]=0;
		}
		else if(i==j){
			dp[i][j]=1;
		}
		else{
			dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
		}
	}
}
cout<<dp[n][r]<<endl;
}
