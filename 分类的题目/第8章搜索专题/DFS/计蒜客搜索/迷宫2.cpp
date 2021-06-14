/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int n,m;
char map[11][11];
int vis[11][11];
int minx=9999;
int f;

int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

void dfs(int x,int y,int step){
	if(step>minx)
		return ;
	if(map[x][y]=='T'){
		f=1;
		if(step<minx)
			minx=step;
		return ;
	}
	
	
	for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
		if(map[nx][ny]!='*' && vis[nx][ny]==0 && nx>=0 && nx<n && ny>=0 && ny<m  ){
			vis[nx][ny]=1;
			dfs(nx,ny,step+1);
			vis[nx][ny]=0;
		}
			
			
	}
	
	
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>map[i];
	int x,y;
	for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(map[i][j]=='S'){
                x=i;
                y=j;
            }
            
    vis[x][y]=1;    
    dfs(x,y,0);		
	
	if(f)
		cout<<minx;
	else
		cout<<-1;
	
	return 0;
}

