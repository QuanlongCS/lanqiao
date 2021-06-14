#include <cstdio>
#include <iostream>
using namespace std;
int a[20];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	int tag;
	int maxp=0;
	for(int i=0;i<n;i++){//2 5 -1 2 -1
		tag=1;
		
		for(int j=i;j<n;j++){
			tag*=a[j];
		if(maxp<=tag)
			maxp=tag;//20
		}
	}
	
	printf("%d ",maxp);
	return 0;
}

