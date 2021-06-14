#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int arr[10];
int main(){
	int t;
	
	for(int i=0;i<5;i++){
		scanf("%d",&t);
		arr[t]++;
	} 

	for(int i=0;i<=10;i++){
		for(int j=1;j<=arr[i];j++){
			printf("%d ",i);
		}
	}
	return 0;
}

