#include <cstdio>
#include <iostream>
using namespace std;
	
	int a[25];
	int n;//n个数 
	int k;//恰好为k 
	
bool dfs(int i,int sum){// 0 0 
	if(i==n)return sum==k;
	
	if( dfs(i+1,sum) )return true;
	
	if( dfs(i+1,sum+a[i]) )return true;
	//4:1 2 3 4
	
	return false;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	
	if(dfs(0,0))printf("yes\n");
	else printf("no\n");
	
	
	return 0;
}
//部分和问题
	//给定an个数使和恰好为k
	
	//in
	//	n=4;
	//	a={1,2,4,7};
	//	k=13;
	//out
	//yes 13=2+4+7
	//No 
