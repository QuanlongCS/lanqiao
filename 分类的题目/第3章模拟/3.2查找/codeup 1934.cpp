#include <stdio.h>
int arr[1005];
int main(){
	int n;
	scanf("%d",&n);//���ݷ�Χ1~200
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
	int x;
	scanf("%d",&x);//������ ����-1 
	int tag=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==x)
			tag=i;
	} 
	printf("%d",tag);
	return 0;
}

