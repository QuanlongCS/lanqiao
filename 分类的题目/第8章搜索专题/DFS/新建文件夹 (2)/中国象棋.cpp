#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
char s[10][10];
dir[8][2]={{2,1},{1,2},{-1,2},{-2,1},
			{-2,-1},{-1,-2},{1,-2},{2,-1}
};
bool vis[10][10];
bool f;
bool in(int x,int y){
	return x>=0 && x<10 && y>=0 && y<9;
}

void dfs(int x,int y){
	vis[x][y]=true;
	if(f)
		return ;	
	if(s[x][y]=='T'){
		f=ture;
		return ;
	}
	for(int i=0;i<8;i++){
		int tx=x+dir[i][0];
		int ty=y+dir[i][1];
		if(in(tx,ty) && s[tx][ty] != '#' && !vis[tx][ty]){
			dfs(tx,ty);
		}
	}
	

}

 
int main(){
	for(int i=0;i<10;i++){
		scanf("%s",s[i]);
	}
	for(int i=0;i<10;i++){
		for(int i=0;i<10;i++){
			if(s[i][j]=='S'){
				x=i;
				y=j;	
			}
	
		}
	}
	
	dfs(x,y);
	
	return 0;
}

