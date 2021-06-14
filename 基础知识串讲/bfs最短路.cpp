#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
struct node{
	int x,y;
	int step;
}S,Temp;

int n,m;


int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

char map[105][105];
int book[105][105];
 
int judge(int x,int y){
	if(x<0 || y<0 || x>=n|| y>=m)
		return 0;
	if(map[x][y]=='#')
		return 0;
	if(book[x][y])
		return 0;
	return 1;
	
} 
int bfs(int x,int y){
	queue<node> q;
	q.push(S);
	
	while(q.size()){
		node head = q.front();
		q.pop();
		
		if(map[head.x][head.y]=='G')
			return head.step;
		for(int i=0;i<4;i++){
			int nx=dx[i]+head.x;
			int ny=dy[i]+head.y;
			
			if(judge(nx,ny)){
				Temp.x=nx;
				Temp.y=ny;
				Temp.step=head.step+1;
				
				book[nx][ny]=1;
				q.push(Temp);
			}
			
		}
		
		
	}
	return -1;
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
				S.x=i;
				S.y=j;
				S.step=0;
				
				cout<<bfs(i,j);
				return 0;
			}
		}
	}
	
	
	
	
}

