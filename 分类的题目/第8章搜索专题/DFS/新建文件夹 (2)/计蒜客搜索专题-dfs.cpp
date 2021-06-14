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
		int tx=x+dir[i][0];//0 ��x��λ�� 
		int ty=y+dir[i][1];//1 ��y��λ��
		//��Ϊ����������4��2��
		if(in(tx,ty) && maze[tx][ty] !='*' && !vis[tx][ty]) {
			if(dfs(tx,ty))
				return true;
		}
	}
	//ȡ����� ���� 
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

