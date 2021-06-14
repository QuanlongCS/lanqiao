#include <cstdio>
#include <iostream>
using namespace std;
//n<500
int arr[505];
void insert_sort(int n){
	int cur,tail;
	
	for(int i=1;i<n;i++){
		
		tail=i-1;//已有序序列的尾 
		cur=arr[i];//本次待排序值 
		
		while(tail>=0 && cur<arr[tail]){
			//从tail到0的遍历
			arr[tail+1]=arr[tail];
			tail--; 
		}
		arr[tail+1]=cur;//cur大于[tail]的值,直接将cur放到tail的后面 
	}
	
	return ; 
}
 
int main(){
	int n;
	int temp;int cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		
		if(temp%2==1){
			arr[cnt++]=temp;
		}	
	}
	
		insert_sort(cnt);
		
	for(int i=0;i<cnt;i++){
		if(i==cnt-1)
			cout<<arr[i];
		else 	
			cout<<arr[i]<<",";
	}

	return 0;
}

