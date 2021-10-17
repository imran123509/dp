#include<bits/stdc++.h>
using namespace std;

 int main(){
 	int t;
	 cin>>t;
	 while(t--){
	 	string s;
		 cin>>s;
		 int n=s.size(), mxstring=1, start=0;
		 for(int i=0; i<n; i++){
		 	for(int j=i; j<n; j++){
			 	bool check=true;
				 int st=i, e=j;
				 while(st<e){
				 	if(s[st] !=s[e]){
					 	check=false;
						 break;
					 }
					 st++;
					 e--;
				 }
				 if(check && (j-i+1)>mxstring){
				 	start=i;
					 mxstring=j-i+1;
				 }
			 }
		 }
		 string ans=s.substr(start,  mxstring);
		 cout<<ans<<endl;
	 }
 