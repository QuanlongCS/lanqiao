#include <cstdio>
#include <iostream>
#include <algorithm> 
using namespace std;
//93 85 77 68 59 100 43 94 75 82
int arr[35];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	
	sort(arr,arr+N,greater<int>());
	int K;scanf("%d",&K);
	int res=0.00;
	for(int i=0;i<K;i++){
		res+=arr[i];
	}
		printf("%.2f\n",1.0*res/K);


	return 0;
}

