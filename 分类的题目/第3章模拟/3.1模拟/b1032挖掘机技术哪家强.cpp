#include <stdio.h>
#include <iostream>
using namespace std;
int arr[1000005];
int main(){
	int n;
	cin>>n;
	int max=-1;
	
	for(int i=1;i<=n;i++){
		int id;int score;
		
		scanf("%d%d",&id,&score);
		arr[id]+=score;
	}
	int tag;
	for(int i=1;i<=n;i++){
		if(arr[i]>max){
			max=arr[i];
			tag=i;
		}
			
	}
	cout<<tag<<" "<<max;
	return 0;
}

