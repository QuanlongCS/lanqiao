#include <cstdio>
#include <iostream>
#include <stack>
#include <queue> 
using namespace std;

int main(){
	
	stack<int>s;//{}������ջβ���в��� 
	//push pop top 
	s.push(101);//{101
	s.push(105);//{101,105
	s.push(109);//{101,105,109
	
	printf("%d\n",s.top());//ջβ 
	s.pop();
	
	printf("%d\n",s.top());//ջβ 
	s.pop();
	
	printf("%d\n",s.top());//ջβ 
	s.pop();
	
//
	printf("___________________\n");
//
	queue<int>q;//���жԶ�β���� 
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

