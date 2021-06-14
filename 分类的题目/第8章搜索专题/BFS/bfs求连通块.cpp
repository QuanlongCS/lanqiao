/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;
struct node{
	int x,y;
}Node;


int n,m;
int map[105][105];
int vis[105][105];
int X[]={0,0,1,-1};
int Y[]={1,-1,0,0};
bool in(int x,int y){
	if(x>=n || x<0 ||y>=m || y<0 || !map[x][y] ||vis[x][y])
		return false;
		
}


void bfs(int x,int y){
	queue<node> q;
	Node.x=x;
	Node.y=y;
	
	q.push(Node);
	vis[x][y]=1;
	
	while(!q.empty()){
		node top=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx=top.x+X[i];
			int ny=top.y+Y[i];
			
			if(in(nx,ny)){
				Node.x=nx;
				Node.y=ny;
				q,push(Node);	
				vis[nx][ny]=true;
			}
		}
	}
	
	
}
int main(){
	scanf("%d")
	
	
	return 0;
}

