/*
R*C的网格每个格子内有水果/分两类 喜欢吃的和不喜欢吃的
# 表示为喜欢吃的
.不喜欢的
 
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int n,m,ans,cnt;
char map[1005][1005];
int vis[1005][1005];

void dfs(int x,int y){
	if(x<0 || x>=n || y<0 || y>=m || vis[x][y] || map[x][y]=='.')
		return ;
	
	vis[x][y]=1;
	cnt++;
	dfs(x-1,y);
	dfs(x+1,y);
	dfs(x,y-1);
	dfs(x,y+1);
	
	
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%s",map[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!vis[i][j]/*未访问*/ && map[i][j]=='#'){
				cnt=0; 
				dfs(i,j);
				if(cnt>ans)
					ans=cnt;
			}
			
			
		}
	}
		
	printf("%d\n",ans);	
		
	return 0;
}

