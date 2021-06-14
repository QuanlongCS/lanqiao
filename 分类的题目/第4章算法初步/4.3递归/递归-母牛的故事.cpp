/*
打表找规律
 
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int dp[1000];

int f(int n){
	if(n<=4)
		return n;
	if(dp[n])
		return dp[n];
	dp[n]=f(n-1)+f(n-3);
	return dp[n];
}
int main(){
	int n;
	cin>>n; 
	while(n){
		cout<<f(n)<<endl;
		cin>>n;
	} 
	

	return 0;
}

