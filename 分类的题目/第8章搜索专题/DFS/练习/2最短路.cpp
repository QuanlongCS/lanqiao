/*
5 4
1 1 2 1
1 1 1 1
1 1 2 1
1 2 1 1
1 1 1 2
0 0 3 2 

*/
#include <cstdio>
#include <iostream>
using namespace std;
int n,m;
int p,q;
int map[105][105];
int vis[105][105];
int minx=999999;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

void dfs(int x,int y,int step){
    if(x==p && y==q){
        if(step<minx){
            minx=step;
            return ;
        }
    }
    if(x<0 || x>=n ||y<0 ||y>=m || map[x][y]==2 )
        return ;
    
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(map[nx][ny]==1 && vis[nx][ny]==0){
        	vis[nx][ny]=1;
            dfs(nx,ny,step+1);
 			vis[nx][ny]=0;
        }
            
    }
    return ;
}
int main(){
    cin>>n>>m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
			cin>>map[i][j];
            /* code */
        }    
    }
    int sx,sy;
    cin>>sx>>sy>>p>>q;
	
	vis[sx][sy]=1;
    dfs(sx,sy,0);

    cout<<minx;
    return 0;
}
