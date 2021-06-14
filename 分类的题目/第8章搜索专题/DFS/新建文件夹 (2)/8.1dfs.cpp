#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=30;
int n,V<maxValue=0;//物品数量n 背包容量V 最大价值maxV
int w[maxn],c[maxn];//w[i]每件物品重量 c[i]每件物品的价值
//dfs index为当前处理编号 
//sumW 当前总重量, sumC当前总价值 

void DFS(int index,int sumW,int sumC){
	if(index==n){//完成n件物品的选择 特殊状态的死 
		if(sumW <= V && sumC>maxValue){
			maxValue=sumC;//不超过背包容量时更新最大价值maxValue 
		} 
		return ;	 
	}
	
	//岔路
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

