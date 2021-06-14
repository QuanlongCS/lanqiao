#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
	int psum(int *start,int *end){
		int tot;
		while(start<end){
			tot+=*start;//累加值 
			start++;//地址++ 
		}
		return tot; 
	}
int main(){
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	
	int ans=psum(arr,arr+10);//在某些stl里面也是这样格式，sort，next_permutation 
	
	printf("the tot of arr is %d ",ans); 
	
	return 0;
}

