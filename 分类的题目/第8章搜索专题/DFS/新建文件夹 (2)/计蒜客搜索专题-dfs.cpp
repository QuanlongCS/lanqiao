#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int n,m;

string maze[110];
bool vis[110][110];

bool in(int x,int y){
	return x>=0 && x<n && y>=0 && y<m;
}
int dir[4][2]={
		{-1,0},
		{0,-1},
		{1,0},
		{0,1}
};

bool dfs(int x,int y){
	if(maze[x][y]=='T')//tail
		return true;	
	
	vis[x][y]=1;
	maze[x][y]='0';
	
	for(int i=0;i<4;i++){
		int tx=x+dir[i][0];//0 是x的位置 
		int ty=y+dir[i][1];//1 是y的位置
		//因为方向数组是4行2列
		if(in(tx,ty) && maze[tx][ty] !='*' && !vis[tx][ty]) {
			if(dfs(tx,ty))
				return true;
		}
	}
	//取消标记 回溯 
	vis[x][y]=0;
	maze[x][y]='.';
	
	return false; 
} 

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>maze[i];
	}
	
	int x,y;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(maze[i][j]=='S'){
				x=i;
				y=j;
			}
		}
	}
	
	if(dfs(x,y)){
		for(int i=0;i<n;i++){
			cout<<maze[i]<<endl;
		}
	}else{
		cout<<"NO!"<<endl;
	}
	return 0;
}

