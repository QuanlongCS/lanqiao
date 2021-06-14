/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int n,m;
int cnt=0;
int f;
int vis[35][35];

void dfs(int x,int y){
	if(x==n && y==m){
		cnt++;
		return ;
	}
	
	if(x%2==0 && y%2==0)
		return ;
	
	if(x>n || y>m)//out map
		return ;	
		
	dfs(x,y+1);
	dfs(x+1,y);
	

		
}
int main(){

	cin>>n>>m;
	if(n%2==0 && m%2==0){
		cout<<0;
		return 0;
	}
	
	vis[1][1]=1;
	dfs(1,1);	
	cout<<cnt;

	return 0;
}

