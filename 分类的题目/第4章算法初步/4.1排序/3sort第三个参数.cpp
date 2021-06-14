#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[50];
int cmp(int x,int y){
	return x>y;//
}
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);	
	}
	sort(arr,arr+N,cmp);

	for(int i=0;i<N;i++){
		printf("%d ",arr[i]);
	}




	return 0;
}

