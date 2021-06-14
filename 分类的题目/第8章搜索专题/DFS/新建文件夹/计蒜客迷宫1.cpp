#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
char map[10][10];
int vis[10][10];
int flag;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

void dfs(int x,int y){
    if(map[x][y]=='T'){
        flag=1;
        return ;
    }
    if(x<0 || x>=n || y<0 ||y>=m || map[x][y]=='*'||vis[x][y])
        return ;
   
    vis[x][y]=1;

    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
         
            dfs(nx,ny);    
    }
    /*
3 4
S**.
....
***T
    */
    return ;
}
int main(){
    int x,y;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>map[i][j];
        }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(map[i][j]=='S'){
                x=i;
                y=j;
            }

    dfs(x,y);

    if(flag)
    	cout<<"yes";
    else
        cout<<"no";

    return 0;
}
