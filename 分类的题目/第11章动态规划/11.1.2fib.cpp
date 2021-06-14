/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int dp[1000];

int fib(int n){
	if(n<=1)return 1;
	
	if(dp[n])//==f(n)
		return dp[n];
	
	dp[n]=fib(n-1)+fib(n-2);		
	return dp[n]; 
	
}
int main(){
	
	
	printf("%d ",fib(40));
	
	return 0;
}

