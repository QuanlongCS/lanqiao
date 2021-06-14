/*
4 10
0234500067
1034560500
2045600671
0000000089
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int n,m;
int ans=0; 
char map[105][105];
int vis[105][105];

void dfs(int x,int y){
	if(x<0 || x>=n || y<0 || y>=m || map[x][y]=='0')
		return ;
		
	map[x][y]='0';	
	
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%s",map[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]!='0'){
				ans++;
				dfs(i,j);
			}
			
		}
	}		
	
	printf("%d\n",ans);
	return 0;
}

