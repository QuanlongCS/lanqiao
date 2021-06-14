#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
using namespace std;
int a[1005];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	int sum;
	int max;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum+=a[j];
			if(sum>max){
				max=sum;
			}
		}
		
	}
	
	
	
	cout<<max;
	return 0;
}

