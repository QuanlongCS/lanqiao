#include <stdio.h>
void f(int* x){
	*x=100;
}
int main(){
//	int* p;/*��������p��������intָ�� 
//	p��ŵ�ַ 
//	*/ 
//	int i=3;// *  &
//	p=&i;/* pָ��i�ĵ�ַ;
//		*p���Ի��ָ��ֵ 
//	*/
//	//printf("%d",*p); //%p,p:000000000062FE14
//					 //%d,*p:3
//	*p=30;
//	printf("%d",*p);				 		 
//	printf("\n%d",i);//�ı���i��ֵ	
//	i=100;
//	printf("\n%d",*p);	

	int i=10;
	printf("%d\n",i);
	f(&i);
	printf("%d\n",i);			 	 			 	 
	return 0;
}

