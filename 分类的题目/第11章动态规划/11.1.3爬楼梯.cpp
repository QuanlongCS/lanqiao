/*
0812
爬楼梯n层楼梯每次只能1或2步共有多少种方法爬到楼顶 
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <ctime>
using namespace std;
int dp[10000];

int f(int n){
	if(n==1||n==2)
		return n;
	if(dp[n])
		return dp[n];
	
	dp[n]=f(n-1)+f(n-2);
	return dp[n];	
	
} 
int main(){
	
	printf("%d",f(5));
 	system("pause"); 
	return 0;
		
}

