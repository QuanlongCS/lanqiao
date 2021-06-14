#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

void select(int* a,int n){
	for(int i=0;i<n;i++){
		int k=i;
		for(int j=i;j<n;j++){
			if(a[j]<a[k]){
				k=j;
			}
		}
		
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
} 
int main(){
	int a[5]={3,1,4,1,5};
	select(a,5);
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

