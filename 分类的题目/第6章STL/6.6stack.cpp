#include <cstdio>
#include <iostream>
#include <stack>
//����ȳ������ݽṹ 
using namespace std;

int main(){
	stack<int> s;
	for(int i=0;i<5;i++){
		s.push(i);
	}//01234 
	s.pop(); 
	printf("%d ",s.top());//ֻ��ͨ��top��ջ���з��� 

/*
	push();
	pop();����ջ��Ԫ�� 
	top();��ȡջ��Ԫ��
	empty();stack�Ƿ�Ϊ�� ;trueΪ��;false�ǿ� 
	size();����Ԫ�ظ���
	 
*/ 
/*
	stack�ĳ�����;
	ģ��һЩ�ݹ�Ҳ����dfs 
*/ 
	return 0;
}

