#include <cstdio>
#include <iostream>
using namespace std;
int n,m;
char map[105][105];

void dfs(int x,int y){
		map[x][y]='.';
	
//	if(x<n && x>=0 && y<m && y>=0 && map[x][y]=='W'){
//		map[x][y]='.';
//		dfs(x-1,y);  dfs(x+1,y);  dfs(x,y-1);  dfs(x,y+1);
//		dfs(x-1,y-1);dfs(x-1,y+1);dfs(x+1,y-1);dfs(x+1,y+1);
//	}
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			int nx=x+i;
			int ny=y+j;
			
			if(0<=nx && nx<n && 0<=ny && ny<m && map[nx][ny]=='#')
				dfs(nx,ny);
		}
	}
	
	return ;
}

int main(){
	cin>>n>>m;

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>map[i][j];
	
	
				
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			
			if(map[i][j]=='#'){
				++cnt;
				dfs(i,j);
			}
				
		}
	}
			
	
	
printf
	
	

	return 0;
}
/*
nm的院子积起水，八连通被认为是链接在一起的
10 12
W........WW.
.WWW.....WWW
....WW...WW.
.........WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.
*/

