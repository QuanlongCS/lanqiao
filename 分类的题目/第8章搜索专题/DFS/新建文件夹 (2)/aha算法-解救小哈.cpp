#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m;//��ͼ��ģ
int p,q;//�յ�����
int mins=9999999;//

int a[105][105];//��ͼ 
int book[105][105];//��ͼ��hash
 

void dfs(int x,int y,int step){//xy��ʾ����,step��ʾ�߹��Ĳ��� 
	int next[4][2]={
	{0,1},//���� 
	{1,0},//���� 
	{0,-1},//���� 
	{-1,0}//���� 
}; 
	int tx,ty,k;

	//if����С����λ��
	if(x==p && y==q){
		//������Сֵ
		if(step<mins)
			mins=step;
		return ;// 
	} 
	
	//ö��4�߷� 
	for(int k=0;k<4;k++){
		tx=x+next[k][0];
		ty=y+next[k][1];
		//�ж��Ƿ�Խ��
		if(tx<1 || ty<1 || tx>n || ty>m)
			continue;
		if(a[tx][ty]==0 && book[tx][ty]==0){
			book[tx][ty]=1;//����Ѿ��߹� 
			dfs(tx,ty,step+1);//������һ���� 
			book[tx][ty]=0;//���Խ���ȡ��������� 
		} 
	} 


	return ; 
}
 
int main(){

	int sx,sy;//��ʼλ�� 
	//����nm
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

