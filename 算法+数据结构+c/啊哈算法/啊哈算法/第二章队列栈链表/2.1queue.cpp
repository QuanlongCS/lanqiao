#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	int a[102]={6,3,1,7,5,8,9,2,4};
	int head=0,tail=9;
	while(head<tail){
		printf("%d ",a[head]);//9
		++head;//3
		//tail此前是空，然后赋值9 
		a[tail]=a[head];//3入队 
		++tail;//向后走10
		++head;//1 
	}
	printf("\n");
	for(int i=0;i<=101;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

