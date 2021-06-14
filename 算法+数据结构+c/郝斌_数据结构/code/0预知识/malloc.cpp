#include <stdio.h>
#include <stdlib.h>
int main(){
//	int len;
//	scanf("%d",&len);
	
	int* pArr;
	pArr=(int*)malloc( 20 );
	
	for(int i=0;i<4;i++){
		scanf("%d",pArr+i);		// &pArr[i]
		printf("%d ",*(pArr+i));// *(pArr+i)
		
	}
	
	return 0;
}

