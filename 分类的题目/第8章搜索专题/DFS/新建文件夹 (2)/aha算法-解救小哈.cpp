#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m;//地图规模
int p,q;//终点坐标
int mins=9999999;//

int a[105][105];//地图 
int book[105][105];//地图的hash
 

void dfs(int x,int y,int step){//xy表示坐标,step表示走过的步数 
	int next[4][2]={
	{0,1},//向右 
	{1,0},//向下 
	{0,-1},//向左 
	{-1,0}//向上 
}; 
	int tx,ty,k;

	//if到达小哈的位置
	if(x==p && y==q){
		//更新最小值
		if(step<mins)
			mins=step;
		return ;// 
	} 
	
	//枚举4走法 
	for(int k=0;k<4;k++){
		tx=x+next[k][0];
		ty=y+next[k][1];
		//判断是否越界
		if(tx<1 || ty<1 || tx>n || ty>m)
			continue;
		if(a[tx][ty]==0 && book[tx][ty]==0){
			book[tx][ty]=1;//标记已经走过 
			dfs(tx,ty,step+1);//尝试下一个点 
			book[tx][ty]=0;//尝试结束取消这个点标记 
		} 
	} 


	return ; 
}
 
int main(){

	int sx,sy;//起始位置 
	//读入nm
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			scanf("%d",&a[i][j]); 
	scanf("%d%d%d%d",&sx,&sy,&p,&q);
	book[sx][sy]=1;
	
	dfs(sx,sy,0);
	if(mins==9999999)
		printf("No Way!");
	else 
		printf("%d",mins);
	return 0;
}

