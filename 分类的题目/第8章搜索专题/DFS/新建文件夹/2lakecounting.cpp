/*
10 12
W........WW.
.WWW.....WWW
....WW...WW.
........WWW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.

3
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int n,m;
char map[105][105];

void dfs(int x,int y){
	//替换掉所在位置 
	map[x][y]='.';
	
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			//循环遍历移动方向 
			int nx=x+i;
			int ny=y+j;
			
			//是否在边界内 且 符合条件 
			if(nx>=0 && nx<n && ny>=0 && ny<m && map[nx][ny]=='W' )
				dfs(nx,ny);
		}
	}

	return ;
}

int main(){
	//1输入"规模" 与 "图"
	cin>>n>>m;
	for(int i=0;i<n;i++)
		scanf("%s",map[i]);
	
	//找到某一个连通块作为起始点	
	int res=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]=='W'){
				res++;//找到一个加1 
				dfs(i,j);//搜附近的块共同作为1个 
			}
			
		}
	}
	
	//进行搜的次数,就是连通块的个数 
	cout<<res;
	
	return 0;
}

