#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef struct queue{
	int data[100];//0~8
	int head;
	int tail;	
}queue; 

int main(){
	
	queue q={
		{6,3,1,7,5,8,9,2,4},
		0,
		9
	};
	
	
	
	while(q.head<q.tail){//0~9
		printf("%d ",q.data[q.head]);
		++q.head;
		
		q.data[q.tail]=q.data[q.head];
		++q.tail;
		++q.head;
	}

	return 0;
}

