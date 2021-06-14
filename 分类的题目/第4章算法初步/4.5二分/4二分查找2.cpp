#include <cstdio>
#include <iostream>
#include <algorithm> 
using namespace std;

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
		
		if(lower_bound(a,a+n,x)){//数组,数组+长度,待查找 
			printf("%d\n",x);
		}else printf("-1\n");
	
	}
	return 0;
}

