#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int a[101],n;
	void quicksort(int left,int right){
		int i,j,t,temp;
		if(left>right)
			return;
		
		temp=a[left];
		i=left;
		j=right;
		while(i!=j){
			while(a[j]>=temp && i<j)
				j--;//从右往左一直到小于temp 
				
			while(a[i]<=temp && i<j)
				i++;
				
			if(i<j){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			} 	
		}
		
		a[left]=a[i];
		a[i]=temp;
		
		quicksort(left,i-1);
		quicksort(i+1,right);
		return ;
	}
int main(){
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	
	quicksort(1,n);
	
	for(i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
	//i		*		*	 j	
	//6 1 2 7 9 3 4 5 10 8
	//		i *	  * j	
	//6 1 2 5 9 3 4 7 10 8
	//		    *
	//6 1 2 5 4 3 9 7 10 8
	//...
