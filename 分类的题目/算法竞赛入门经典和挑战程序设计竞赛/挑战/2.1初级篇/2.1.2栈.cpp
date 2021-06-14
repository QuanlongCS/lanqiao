#include <cstdio>
#include <iostream>
#include <stack>
#include <queue> 
using namespace std;

int main(){
	
	stack<int>s;//{}允许在栈尾进行操作 
	//push pop top 
	s.push(101);//{101
	s.push(105);//{101,105
	s.push(109);//{101,105,109
	
	printf("%d\n",s.top());//栈尾 
	s.pop();
	
	printf("%d\n",s.top());//栈尾 
	s.pop();
	
	printf("%d\n",s.top());//栈尾 
	s.pop();
	
//
	printf("___________________\n");
//
	queue<int>q;//队列对队尾操作 
	//push pop front
	q.push(11);
	q.push(12);
	q.push(13);
	
	printf("\n%d",q.front());//
	q.pop();
	printf("\n%d",q.front());//
	q.pop();
	printf("\n%d",q.front());//
	q.pop();


	
	return 0;
}

