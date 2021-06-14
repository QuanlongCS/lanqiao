#include <cstdio>
#include <iostream>
#include <algorithm> 
using namespace std;
//1 先排序sort再二分查找 
int a[100005];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(int i=0;i<m;i++){
		int x;
		scanf("%d",&x);
		
		if(binary_search(a,a+n,x)){//数组,数组+长度,待查找 
			printf("YES\n");
		}else printf("NO\n");
	
	}
	return 0;
}

