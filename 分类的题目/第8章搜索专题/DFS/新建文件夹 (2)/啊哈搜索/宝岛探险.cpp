/*
10 10 6 8
1 2 1 0 0 0 0 0 2 3
3 0 2 0 1 2 1 0 1 2
4 0 1 0 1 2 3 2 0 1
3 2 0 0 0 1 2 4 0 0
0 0 0 0 0 0 1 5 3 0
0 1 2 1 0 1 5 4 3 0
0 1 2 3 1 3 6 2 1 0
0 0 3 4 8 9 7 5 0 0
0 0 0 3 7 8 6 0 1 2
0 0 0 0 0 0 0 0 1 0

*/
#include <cstdio>
#include <iostream>
using namespace std;
int n,m,sx,sy;
int map[105][105];
int res;
int vis[105][105];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

void dfs(int x,int y){
    
	if(map[x][y]==0)
		return ;
    
    res++;
	map[x][y]=0;
	
	
	
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if( map[nx][ny]!=0 ){
        	
			dfs(nx,ny);
		
        }
            
    }


    return ;
}


int main(){
    scanf("%d%d%d%d",&n,&m,&sx,&sy);
    getchar();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&map[i][j]);
        }
    }
    
    dfs(sx,sy);

    printf("%d",res);


    return 0;
}
