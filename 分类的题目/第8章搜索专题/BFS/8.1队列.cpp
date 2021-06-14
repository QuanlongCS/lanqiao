/*
	队列 - 先进先出
	push() 
	pop()队首出队 
	empty() 
	size() 
	front()队首
	rear()队尾
	 
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string> 
using namespace std;

int main(){
	queue<string> q;
/*	
	while(!q.empty()){
		//在使用队之前要检查是否为空否则会error
	
		//队列没有clear方法只能让队首一直出队这样达到清空的目的
		q.pop(); 
		
	} 
*/		
	q.push("ZhangSan");
	q.push("LiSi");
	q.push("WangWu");
	
	while(!q.empty()){//false取反 
		cout<<q.front()<<" ";
		q.pop(); 
	}
	return 0;
}

