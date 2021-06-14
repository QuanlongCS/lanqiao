#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m;//????

int mins;//
int sx,sy;//stard
int tx,ty;//end

int a[105][105];//?? 
int book[105][105];//

int next[4][2]={
	{0,1},//?? 
	{1,0},//?? 
	{0,-1},//?? 
	{-1,0}//?? 
};  

void dfs(int x,int y,int step){//xy????,step??????? 
	
	if(x==tx && y==ty){
	//’“µΩ 
		if(step<mins)
			mins=step;//∏¸–¬mins 
		return ;// 
	} 
	
	if(tx<0 || tx>=n || ty>=m || ty<0 || a[x][y]==1)
		return ;
	
		
	for(int k=0;k<4;k++){
			
		int tx=x+next[k][0];
		int ty=y+next[k][1];
		
		if(a[tx][ty]==0 && book[tx][ty]==0){
			book[tx][ty]=1;
			dfs(tx,ty,step+1);//?????? 
			book[tx][ty]=0;
		} 
	} 


	return ; 
}
 
int main(){


	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
	scanf("%d%d%d%d",&sx,&sy,&tx,&ty);
	
	book[sx][sy]=1;
	
	dfs(sx,sy,0);
	
	if(mins==9999999)
		printf("No Way!");
	else 
		printf("%d",mins);
	return 0;
}
