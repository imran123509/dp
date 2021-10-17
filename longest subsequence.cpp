#include<bits/stdc++.h>
using namespace std;

 int lagestsubsequence(vector<int> &v){
 	int n=v.size();
	 vector<int> dp(n, 1);
	 for(int i=1; i<n; i++){
	 	for(int j=0; j<=i-1; j++){
		 	if(v[j]<v[i]){
		 
		 	dp[i]=max(dp[i], 1+dp[j]);
			 }
		 }
	 }
	 return *max_element(dp.begin(), dp.end());
 }
 int main(){
 	vector<int> v{10,9,2,5,3,7,101,18};
	 cout<<lagestsubsequence(v)<<endl;
 }