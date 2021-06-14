/*
5 4
1 1 2 1
1 1 1 1
1 1 2 1
1 2 1 1
1 1 1 2
1 1 4 3
*/
#include <cstdio>
#include <algorithm>
#include <iostream> 
#include <queue>
using namespace std;

int a[105][105],v[105][105];

struct point{
	int x;
	int y;
	int step;
};
queue<point> r;//申请队列
 
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};


int main(){
	int n,m;
	cin>>n>>m;	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	} 
	int sx,sy,p,q;
	cin>>sx>>sy>>p>>q;
	
	//bfs
	point start;
	start.x=sx;//
	start.y=sy;//起点 
	start.step=0;
	
	r.push(start);//将起点入队 
	v[sx][sy]=1;
	int flag=0; 
	while(!r.empty()){
		int x=r.front().x;
		int y=r.front().y;//队首元素
		
		if(x==p && y==q){
			cout<<r.front().step;
			flag=1;
			break;
		}
		
		for(int k=0;k<=3;k++){
			int tx=x+dx[k];
			int ty=y+dy[k];
			if(a[tx][ty]==1 && v[tx][ty]==0){
				//入队
				point temp;
				temp.x=tx;
				temp.y=ty;
				temp.step=r.front().step +1;
				
				r.push(temp);
				v[tx][ty]=1;
			}
		}
		r.pop();//拓展完之后,将队首出队	
			 
		 
	} 
	
	if(flag==0)
		cout<<"no ans";
	
	return 0;
}

