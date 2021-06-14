#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n=5;
int main(){
	int a[n]={1,2,3,4,5};
	
	do{
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}while(next_permutation(a,a+n));

	return 0;
}

