/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int m,n;
int p,q;//终点
//初始步数 
int a[105][105]; //地图	: 1空地 2障碍物 
int vis[105][105];//状态 :0 未访问;1 已访问 
int minx= 99999999;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

void dfs(int x,int y,int step){
	if(x==p && y==q){
		if(step<minx)
			minx=step;
		return ;//回溯 搜索另一种方法		
	}
	/*
	5 4
	1 1 2 1
	1 1 1 1
	1 1 2 1
	1 2 1 1
	1 1 1 2
	1 1 4 3 
	*/ 
	//右下左上 顺时针试探 
	//		  (x-1,y)
	//(x,y-1)  (x,y)  (x,y+1)
	//		  (x+1,y)
	
	/* 
	if(a[x][y+1]==1 && vis[x][y+1]==0){
		vis[x][y+1]=1;
		dfs(x,y+1,step+1);
		vis[x][y+1]=0;//回溯 
	}
		 
	if(a[x+1][y]==1 && vis[x+1][y]==0){
		vis[x+1][y]=1;
		dfs(x+1,y,step+1);
		vis[x+1][y]=0;//回溯 	
	}	
		
	if(a[x][y-1]==1 && vis[x][y-1]==0){
		vis[x][y-1]=1;
		dfs(x,y-1,step+1);
		vis[x][y-1]=0;//回溯 
	} 
	
	if(a[x-1][y]==1 && vis[x-1][y]==0){
		vis[x-1][y]=1;
		dfs(x-1,y,step+1);
		vis[x-1][y]=0;//回溯 
	} 
	*/
	
	for(int k=0;k<=3;k++){
		int tx,ty;
		tx=x+dx[k];
		ty=y+dy[k];
		if(a[tx][ty]==1 && vis[tx][ty]==0){
			vis[tx][ty]=1;
			dfs(tx,ty,step+1);
			vis[tx][ty]=0;
		} 
	}	
	return ;	
} 

int main(){
	int sx,sy;//起点 
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	
	cin>>sx>>sy>>p>>q;
	
	vis[sx][sy]=1;//起点已经访问
	dfs(sx,sy,0);
	
	cout<<minx;
	
	
	
	 
	
	
	return 0;
}

