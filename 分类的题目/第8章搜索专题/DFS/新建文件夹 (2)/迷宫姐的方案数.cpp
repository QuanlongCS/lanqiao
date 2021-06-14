/*
5 5
s####
.####
.####
.####
....e
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int n,m;
int ans;

char map[15][15];
bool vis[15][15];

void dfs(int x,int y){
	if(x<0 || x>=n || y<0 || y>=m || vis[x][y]/*已经走过*/ || map[x][y]=='#')
		return ;
	if(map[x][y]=='e'){
		ans++;
		return ;
	} 
	
	vis[x][y]==true;
	
	dfs(x-1,y);
	dfs(x+1,y);
	dfs(x,y-1);
	dfs(x,y+1);
	
	vis[x][y]=false;
	
}

int main(){
	scanf("%d%d",&n,&m);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}	
	int x,y;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]=='s'){
				x=i;
				y=j;
			}
		}
	}
	
	dfs(x,y);
	printf("%d\n",ans);
	
	return 0;
}

