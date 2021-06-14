#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;
void insert(int* a,int n){
	for(int i=1;i<n;i++){//n-1лкеепР 
		int temp=a[i],j=i;
		while(j>1 && temp<a[j-1]){
			a[j]=a[j-1];
			j--;
		} 
		a[j]=temp;
	}
}
int main(){
	int arr[7]={3,1,4,5,9,2,6};
	
	insert(arr,7);
	
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

