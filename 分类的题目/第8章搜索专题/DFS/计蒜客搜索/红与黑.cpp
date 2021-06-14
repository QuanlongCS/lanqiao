#include <iostream>

using namespace std;
int w,h;
char map[21][21];
int ans;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

void dfs(int x,int y){
    if(map[x][y]=='#')
        return ;
        
    
        ans++;
		map[x][y]='#';
	
	
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(map[nx][ny]=='.'){
            
            dfs(nx,ny);
        }


    }
}

int main(){
    cin>>w>>h;
    for(int i=0;i<h;i++)
        cin>>map[i];

    //@起点
    int x,y;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(map[i][j]=='@'){
                x=i;
                y=j;
            }

        }
    }

    dfs(x,y);
    cout<<ans;
    return 0;
}
