//next_permutation。 
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
int n,p[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&p[i]);
 
	sort(p,p+n);
		
	do{
		for(int i=0;i<n;i++)
			printf("%d ",p[i]);
		printf("\n");
	}while(next_permutation(p,p+n));
	

return 0;
}
//输入数组元素arr[max];
//排序sort 
//do{}while(next_permutation(p,p+n));

/*
next_permutation和prev_permutation。 
 
