#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=30;
int n,V<maxValue=0;//��Ʒ����n ��������V ����ֵmaxV
int w[maxn],c[maxn];//w[i]ÿ����Ʒ���� c[i]ÿ����Ʒ�ļ�ֵ
//dfs indexΪ��ǰ������ 
//sumW ��ǰ������, sumC��ǰ�ܼ�ֵ 

void DFS(int index,int sumW,int sumC){
	if(index==n){//���n����Ʒ��ѡ�� ����״̬���� 
		if(sumW <= V && sumC>maxValue){
			maxValue=sumC;//��������������ʱ��������ֵmaxValue 
		} 
		return ;	 
	}
	
	//��·
	DFS(index+1,sumW,sumC);
	DFS(index+1,sumW+w[index],sumC+c[index]); 
} 
int main(){
	scanf("%d%d",&n,&V);
	for(int i=0;i<n;i++){
		scanf("%d",&w[i]);
	}	
	for(int i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	DFS(0,0,0);
	printf("%d\n",maxValue);
	
	


	return 0;
}

