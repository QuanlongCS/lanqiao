#include <cstdio>
#include <iostream>
#include <stack>
//后进先出的数据结构 
using namespace std;

int main(){
	stack<int> s;
	for(int i=0;i<5;i++){
		s.push(i);
	}//01234 
	s.pop(); 
	printf("%d ",s.top());//只能通过top对栈进行访问 

/*
	push();
	pop();弹出栈顶元素 
	top();获取栈顶元素
	empty();stack是否为空 ;true为空;false非空 
	size();返回元素个数
	 
*/ 
/*
	stack的常见用途
	模拟一些递归也就是dfs 
*/ 
	return 0;
}

