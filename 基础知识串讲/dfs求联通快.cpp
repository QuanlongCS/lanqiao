#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n,m;
char map[105][105];
int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};
 
void dfs(int x,int y){
	map[x][y]='.';
	
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			int nx=x+i;
			int ny=y+j;
			if(map[nx][ny]=='*' || nx<0||ny<0||nx>=n||ny>=m)
				continue;
			if(map[nx][ny]=='@'){
				dfs(nx,ny);
			}
		}
	}
	
}
int main(){
	cin>>n>>m;
	int res=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]=='@'){
				res++;
				dfs(i,j);
			}
				
		}
	}
	
	cout<<res;
	return 0;
}
/*
5 5
****@
*@@*@
*@**@
@@@*@
@@**@

*/
