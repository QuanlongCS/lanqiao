#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
	struct queue{
		int data[100];
		int head;
		int tail;
		
	};
int main(){
	struct queue q;
	q.head=1;
	q.tail=1;
	for(int i=1;i<=9;i++)
		scanf("%d",&q.data[q.tail++]);
	while(q.head<q.tail){
		printf("%d ",q.data[q.tail]);
		q.head++;
		
		q.data[q.tail]=q.data[q.head];
		q.tail++;
		q.head++; 
	}
	
	return 0;
}

