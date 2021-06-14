/*
easy
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int a[1005];


int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}

	int x,y;
	for(int i=0;i<m;i++){
		
		cin>>x>>y;
		
		int temp=a[x];
		a[x]=a[y];
		a[y]=temp;
	}
	
	
	for(int i=1;i<=n;i++){
		printf("%d\n",a[i]);
	}
	
	
	return 0;
}

