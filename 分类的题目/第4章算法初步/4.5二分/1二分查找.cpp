#include <cstdio>
#include <iostream>
using namespace std;
 
//a[]为严格递增序列 left为下界 right上界 x待查找值 
int div_search(int a[],int left,int right,int x){
	int mid;
	
	while(left<=right){
		
		mid=(left+right)/2;//取中点
		
		if(a[mid]==x)return mid;
		
		else if(a[mid]>x){ //中间数大于x,则说明x在mid的左边  left -x- mid -- right
			right=mid-1;
		}else if(a[mid]<x){// left -- mid -x- right  
			left=mid+1;
		}
			 
	}
	
	return -1;
	
}//返回下标位置 
 

int main(){
	int n=10;
	int a[n]={1,3,4,6,7,8,11,15,23,30};
	printf("%d %d",div_search( a,0,n-1,4),div_search(a,0,n-1,9));
	// 0 1 2  ||   -1
	return 0;
}

