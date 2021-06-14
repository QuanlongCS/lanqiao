#include <stdio.h>
void show(int* arr){
	for(int i=0;i<5;i++)
	printf("%d\n",*(arr+i));
}
int main(){
	int a[5]={0,1,2,3,4};//数组名存放数组首地址 
//	a==a[0];
//	a+1==a[1];
//	a+i==a[i];
//	a[i]==*(a+i);  

	show(a);
 	
	return 0;
}

