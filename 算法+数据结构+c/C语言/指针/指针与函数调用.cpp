#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
	void change(int *a,int *b){//int *a=&x;int *b=&y; 
		int temp;
		
		temp=*a;	//让值进行交换，如果单单是a的话只是地址。 
		*a=*b;
		*b=temp; 
	}
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	printf("beofer:%d %d\n",x,y); 
	change(&x,&y);//指针的声明形式是 int *ptr=&valaddress; 
	printf("after:%d %d\n",x,y); 
	return 0;
}

