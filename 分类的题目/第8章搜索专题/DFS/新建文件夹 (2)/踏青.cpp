//踏青 0809dfs 连通块 
#include <cstdio>
#include <iostream>

using namespace std;

char map[105][105];
bool vis[105][105];

int n,m;
void dfs(int x,int y){
	
	if(x<0 || x>=n || y<0 || y>=m || vis[x][y] || map[x][y]=='.')
		return ;
		
	vis[x][y]=1;//以访问 
	
	dfs(x-1,y);
	dfs(x+1,y);
	dfs(x,y-1);
	dfs(x,y+1);
		
		
}
 
int main(){

	scanf("%d %d",&n,&m);
	
	for(int i=0;i<n;i++)	
		scanf("%s",&map[i]);
	
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!vis[i][j] && map[i][j]=='#'){
				ans++;
				dfs(i,j);
				
			}
			
		}	
	}
	
	printf("%d\n",ans);
	return 0;
}
/*
5 6
.#....
..#...
..#..#
...##.
.#....
*/
