/*
https://www.acoj.com/problems/12037
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int n,m;
int map[105][105];
int maxn=-9999;;
int cnt;

void dfs(int x,int y){
	if(map[x][y]==0 || x<0 ||x>=n || y<0 || y>=m || map[x][y]==-1)//Í¼ÄÚ,ÇÒ¿ÉÐÐ 
		return ;
	cnt++;
	map[x][y]=-1;
	
	dfs(x-1,y);
	dfs(x+1,y);
	dfs(x,y+1);
	dfs(x,y-1);
	
	 
}





 
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&map[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]!=0 && map[i][j]!=-1){
				dfs(i,j);
				if(cnt>maxn)
					maxn=cnt;
				cnt=0;
			}
				
		}
	}
	
	printf("%d",maxn);
	return 0;
}

