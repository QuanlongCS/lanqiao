/*
n*m�ľ��� ����Ԫ��0 or 1
���

6 7
0 1 1 1 0 0 1
0 0 1 0 0 0 0
0 0 0 0 1 0 0
0 0 0 1 1 1 0
1 1 1 0 1 0 0
1 1 1 1 0 0 0 

4 

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
const int maxn =100;
struct node {
	int x,y;
}Node; 

int n,m;
int matrix[maxn][maxn];//map
bool inq[maxn][maxn];//vis

int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

bool judge(int x,int y){
	if(x>=n || x<0 || y>=m || y<0)
		return false;
	if(matrix[x][y]== 0  || inq[x][y]==true;)
		return false;
	
	return true;
}

void bfs(int x,int y){
	queue<Node> Q;//������� 
	Node.x=x;//(x,y) 
	Node.y=y;
	Q.push(Node);
	inq[x][y]=true;

	while(!Q.empty()){
		node top=Q.front;
		Q.pop();

		for(int i=0;i<4;i++){
			int nx=top.x+dx[i];
			int ny=top.y+dx[i];
		}
		if(judge(nx,ny)){
			Node.x=nx;
			Node.y=ny;
			Q.push(Node);
			inq[nx][ny]=true;
		}

	}
}
int main(){
	
	
	return 0;
}

