#include <stdio.h>
void f(int* x){
	*x=100;
}
int main(){
//	int* p;/*变量名是p，类型是int指针 
//	p存放地址 
//	*/ 
//	int i=3;// *  &
//	p=&i;/* p指向i的地址;
//		*p可以获得指向值 
//	*/
//	//printf("%d",*p); //%p,p:000000000062FE14
//					 //%d,*p:3
//	*p=30;
//	printf("%d",*p);				 		 
//	printf("\n%d",i);//改变了i的值	
//	i=100;
//	printf("\n%d",*p);	

	int i=10;
	printf("%d\n",i);
	f(&i);
	printf("%d\n",i);			 	 			 	 
	return 0;
}

