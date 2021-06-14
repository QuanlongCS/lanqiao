#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
char map[21][21];
int minx=999999;
int vis[21][21];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int sx,sy,p,q;
int f;
//	超时29/30
void dfs(int x,int y,int step){
    if(step>=minx)
		return ; 
	if(map[x][y]=='*'){
        if(step<minx){
        	f=1;
        	minx=step;
        	
        	return ;
        }
            
    }
    
   

    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
		
        if( map[nx][ny]!='#' && vis[nx][ny]==0 && x>=0 && x<n && y>=0 && y<m){
        	vis[nx][ny]=1;
            dfs(nx,ny,step+1);
            vis[nx][ny]=0;
        }
        
    }

	return ;
}
int main(){
    scanf("%d %d",&n,&m);
   
    for(int i=0;i<n;i++)
    	scanf("%s",map[i]);
    
    //1) '@'：少年李逍遥所在的位置；
    //2) '.'：可以安全通行的方格；
    //3) '#'：有怪物的方格；
    //4) '*'：仙药所在位置。
  
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
        	if(map[i][j]=='@'){
                sx=i;
                sy=j;
            
            vis[sx][sy]=1;
    		dfs(sx,sy,0);
    		
    		if(f)
    			cout<<minx;
   			else
    			cout<<-1;
    			
   			return 0;
   			
			}
			
        }
            
            
    
            
    
   
    
  
   
    
}
