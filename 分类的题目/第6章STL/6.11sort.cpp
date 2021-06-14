#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
//bool cmp(int a,int b){//适用于任何基本类型 
//	return a>b;//让大的在前面实现降序 
	//a<b升序 
//}

struct node{
	int x;
	int y;
	
}ssd[10];
bool cmp(node a,node b){
	return a.x>b.x ;//按照x 
} 
int main(){
	/*
	
	int a[8]={3,1,4,1,5,9,2,6};
	sort(a,a+8,cmp);
	for(int i=0;i<8;i++){
		printf("%d ",a[i]);
	}
	*/ 
	
	ssd[0].x=2;
	ssd[0].y=2;
	ssd[1].x=1;
	ssd[1].y=3;
	ssd[2].x=3;
	ssd[2].y=1;
	sort(ssd,ssd+3,cmp); 
	for(int i=0;i<3;i++){
		printf("%d %d\n",ssd[i].x,ssd[i],y);
	}
	
	
	
	
	
	
	return 0;
}

