#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int arr[10]={1,2,3};
	do{
		printf("%d%d%d\n",arr[0],arr[1],arr[2]);
	}while(next_permutation(arr,arr+3));
	
	//fill
	int a[10];
	fill(a,a+10,233);
	//sort
	return 0;
}

