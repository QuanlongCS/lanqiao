#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
	void change(int *a,int *b){//int *a=&x;int *b=&y; 
		int temp;
		
		temp=*a;	//��ֵ���н��������������a�Ļ�ֻ�ǵ�ַ�� 
		*a=*b;
		*b=temp; 
	}
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	printf("beofer:%d %d\n",x,y); 
	change(&x,&y);//ָ���������ʽ�� int *ptr=&valaddress; 
	printf("after:%d %d\n",x,y); 
	return 0;
}

