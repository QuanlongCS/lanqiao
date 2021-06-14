#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
	int sum(int arr[]/* *arr */,int n){
		int tot;
		for(int i=0;i<n;i++)
			tot+=*(arr+i);//
		
	return tot;	
	}
	
	
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",arr+i); //
	
	int ans=sum(arr,n);
	printf("ans=%d",ans);
	return 0;
}

