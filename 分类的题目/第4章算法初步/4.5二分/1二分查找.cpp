#include <cstdio>
#include <iostream>
using namespace std;
 
//a[]Ϊ�ϸ�������� leftΪ�½� right�Ͻ� x������ֵ 
int div_search(int a[],int left,int right,int x){
	int mid;
	
	while(left<=right){
		
		mid=(left+right)/2;//ȡ�е�
		
		if(a[mid]==x)return mid;
		
		else if(a[mid]>x){ //�м�������x,��˵��x��mid�����  left -x- mid -- right
			right=mid-1;
		}else if(a[mid]<x){// left -- mid -x- right  
			left=mid+1;
		}
			 
	}
	
	return -1;
	
}//�����±�λ�� 
 

int main(){
	int n=10;
	int a[n]={1,3,4,6,7,8,11,15,23,30};
	printf("%d %d",div_search( a,0,n-1,4),div_search(a,0,n-1,9));
	// 0 1 2  ||   -1
	return 0;
}

