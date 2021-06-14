#include <cstdio>
#include <iostream>
#include <queue> 
using namespace std;

int main(){
	queue<int> q;
	
	for(int i=0;i<5;i++){
		q.push(i); 
	}
	//01234 
	q.pop();
	//1234 
	//front访问队首 , back访问队尾 
	printf("%d %d",q.front(),q.back());


/*
	push
	pop 队首出队	
	front队首 back队尾 
	empty 是否空 是返回ture 非空返回false 
	size返回元素的个数 01234 返回5
	 

*/ 
	
/*
	常见用途
		bfs时不用手动实现队列而是用queue代替 

*/	
	 
	return 0;
}

