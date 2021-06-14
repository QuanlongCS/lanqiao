#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
//查找key[] 
int a[100005];//orgin

int bin_search(int key){
	int left=0;
	int right=n-1;
	int mid;
	
	while(left<=right){
		mid=(left+right)/2;
		
		if(a[mid]==key)
			return 1;
		else if(a[mid] > key)//l -x- mid   r	
			right=mid-1;
		else if(a[mid] < key)//l mid -x- r
			left=mid+1;
	}
	
	return 0;	
	
}

int main(){
	scanf("%d%d",&n,&m);//n m的输入 
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);//数组的长度 n个ai	
	}
	
	sort(a,a+n);
	
	for(int i=0;i<m;i++){
		int x;
		scanf("%d",&x);//查找值key[]
		 
		if(bin_search(x))
			printf("YES\n");
		else
		printf("NO\n");
	}
	 

	return 0;
}

