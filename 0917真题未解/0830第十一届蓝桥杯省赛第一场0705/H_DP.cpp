/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int dp[35][35];
int n,m;

int main(){
	cin>>n>>m;	
	for(int i=1;i<=30;i++){
		dp[i][1]=1;
		dp[1][i]=1;
	}	
	
	for(int i=2;i<=n;i++){
		for(int j=2;j<=m;j++){
			if(i%2==0 && j%2==0)
				continue;
			else
				dp[i][j]=dp[i-1][j]+dp[i][j-1];//×ó ÉÏ 
		}
	}
	
	cout<<dp[n][m];
	return 0;
}

