#include <cstdio>
#include <iostream>
using namespace std;
//n<500
int arr[505];
void insert_sort(int n){
	int cur,tail;
	
	for(int i=1;i<n;i++){
		
		tail=i-1;//���������е�β 
		cur=arr[i];//���δ�����ֵ 
		
		while(tail>=0 && cur<arr[tail]){
			//��tail��0�ı���
			arr[tail+1]=arr[tail];
			tail--; 
		}
		arr[tail+1]=cur;//cur����[tail]��ֵ,ֱ�ӽ�cur�ŵ�tail�ĺ��� 
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

