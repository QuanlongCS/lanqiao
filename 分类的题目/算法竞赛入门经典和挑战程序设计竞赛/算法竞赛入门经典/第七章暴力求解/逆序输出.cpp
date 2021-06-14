#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int a[105]={0};
	int x,n=0;
	
	while(scanf("%d",&x)==1){
		 a[n++]=x;
	} 
	for(int i=n-1;i>=1;i--)
		printf("%d ",a[i]);
	printf("%d\n",a[0]);
		
	return 0;
} 
