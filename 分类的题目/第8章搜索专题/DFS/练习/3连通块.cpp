#include <cstdio>
#include <iostream>
using namespace std;
int n,m;
char map[105][105];


void dfs(int x,int y){
    map[x][y]='.';

    
    for(int i=-1 ;i<=1;i++){
        for(int j=-1;j<=1;j++){
            //int nx=x+i;
            //int ny=y+j;
            
			if( map[x+i][y+j]=='W')//nx>=0 && nx <n && ny>=0 && ny<m &&
                dfs(i+x,j+y);
        }
    }

    return ;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)
        scanf("%s",map[i]);
	int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(map[i][j]=='W'){
                ans++;
                dfs(i,j);
            }
        }
    }

    cout<<ans;
    return 0;
}
