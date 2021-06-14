#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int a[15];
int main(){
	int n;
	scanf("%d",&n);//如果cin和cout会超 
	
	for(int i=1;i<=n;i++){
		a[i]=i;//
	}
	
	do{
		for(int i=1;i<=n;i++){
			printf("%d",a[i]);
		}
		
    	printf("\n");
	}while(next_permutation(a+1,a+n+1));

	return 0;
}
