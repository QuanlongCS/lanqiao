#include <cstdio>
#include <iostream>
using namespace std;
int a[];//递增正整数序列
int m;
int riot(){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==m){
				printf("%d %d = %d\n",a[i],a[j],m);
			}
		}
	}
}

void twoPointers(){
	while(i<j){// 0 ~ n-1		
		if(a[i]+a[j]==m){
			printf("%d %d \n",i,j);
			i++;
			j--;
		}else if(a[i]+a[j] <m){
			i++;
		}else{
			j--;
		}
		
		
	
	
	}
} 
int main(){
	cin>>a[];
	cin>>m;
	riot();
	return 0;
}

