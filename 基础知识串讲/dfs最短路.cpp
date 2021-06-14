#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n,m;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
char map[105][105]; 
int book[105][105];
int minx=9999;

void dfs(int x,int y,int index){
	if(map[x][y]=='G'){
		if(index<minx)
			minx=index;
		return ;
	}
	
	for(int i=0;i<4;i++){
		int nx=dx[i]+x;
		int ny=dy[i]+y;
		
		if(map[nx][ny]=='#' || nx<0 ||ny<0 || nx>=n ||ny>=m)
			continue;
		if(map[nx][ny]!='#' && !book[nx][ny]){
			book[nx][ny]=1;
			dfs(nx,ny,index+1);
			book[nx][ny]=0;
		}
	}
	
	
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]=='S'){
				book[i][j]=1;
				dfs(i,j,0);
				cout<<minx;
					
			}
		}
	}
	
	
	return 0;
}

