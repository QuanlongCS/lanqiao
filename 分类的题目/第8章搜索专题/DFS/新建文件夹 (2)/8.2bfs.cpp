#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue> 
using namespace std;
const int maxn=100;

struct node{
	int x,y;
}Node;

int n,m;
int map[maxn][maxn];
bool inq[maxn][maxn]={false};
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

bool judge(int x,int y){
	//越界返回false
	if(x>=n || x<0 ||y>=m ||y<0)
		return false;
	//当前位置为0;(x,y)已经入队	
	if(map[x][y]==0 || inq[x][y]==true)
		return false;
	// 
	return true;	 
}

//bfs访问当前xy块将所有"1"设置为true;
void bfs(int x,int y){
	queue<node> q;
	
	Node.x=x;Node.y=y;
	q.push(Node);
	inq[x][y]=true;
	
	while(!q.empty()){
		
		node top=q.front();
		q.pop();
		
		for(int i=0;i<4;i++){
			int nx=top.x+X[i];
			int ny=top.y+Y[i];
			if(judge(nx,ny)){
				Node.x=nx;
				Node.y=ny;
				q.push(Node);
				
				inq[nx][ny]=true;
			}
			
		}
		
	}
	
}

 
 
int main(){
	scanf("%d%d",&n,&m);
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++)
			scanf("%d",&map[x][y]);
	}
	
	int ans=0;
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++){
			if(map[x][y]==1 && inq[x][y]==false){
				ans++;
				bfs(x,y);
			}
				
		}
	}
	
	printf("%d\n",ans);
	return 0;
}

