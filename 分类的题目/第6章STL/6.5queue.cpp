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
	//front���ʶ��� , back���ʶ�β 
	printf("%d %d",q.front(),q.back());


/*
	push
	pop ���׳���	
	front���� back��β 
	empty �Ƿ�� �Ƿ���ture �ǿշ���false 
	size����Ԫ�صĸ��� 01234 ����5
	 

*/ 
	
/*
	������;
		bfsʱ�����ֶ�ʵ�ֶ��ж�����queue���� 

*/	
	 
	return 0;
}

