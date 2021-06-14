#include <stdio.h>
void f(int* p){//2指针形参，无返回值 
	*p=100;//3 传进来的地址是i的地址，再将i的地址取值，赋值100；直接对地址进行操作 
}
int main(){
	int i=10;
	f(&i);//1传参传进去i的地址，因为函数定义时形参是指针变量只能接受地址 
	printf("%d",i); 

	return 0;
}

