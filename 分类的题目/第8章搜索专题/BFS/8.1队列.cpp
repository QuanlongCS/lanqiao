/*
	���� - �Ƚ��ȳ�
	push() 
	pop()���׳��� 
	empty() 
	size() 
	front()����
	rear()��β
	 
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
		//��ʹ�ö�֮ǰҪ����Ƿ�Ϊ�շ����error
	
		//����û��clear����ֻ���ö���һֱ���������ﵽ��յ�Ŀ��
		q.pop(); 
		
	} 
*/		
	q.push("ZhangSan");
	q.push("LiSi");
	q.push("WangWu");
	
	while(!q.empty()){//falseȡ�� 
		cout<<q.front()<<" ";
		q.pop(); 
	}
	return 0;
}

