#include <stdio.h>
#include <malloc.h> 
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* pNext;
	
}Node,* pNode;//�µ��������� �ṹ �� �ṹָ�� 


// 
pNode creat_list(){
	
	pNode pHead=(pNode)malloc(sizeof(Node));//ͷ��� 
	
	pNode pTail=pHead;//* 
	pTail->pNext=NULL;//pTail pHead ��ָ��ͷ�ڵ� 
	
	
	int len;
	printf("����������������� \n");
	scanf("%d",&len);
	
	for(int i=0;i<len;i++){
		int val;
		printf("������� %d ����ֵ��",i);
		scanf("%d",&val);
		
		pNode pNew=(pNode)malloc(sizeof(Node));//�½�� 
		
		pNew->data=val;//1 ���ݴ��val�ŵ��½��������� 
		pTail->pNext=pNew;//2 pTailָ����ָ��pNew 
		pNew->pNext=NULL;//3 pNew��ָ������� 
		pTail=pNew; //4 ��tail��ֵʱ�� pTail=pHead ��pew�ı��pTail 
	}
	return pHead; 
}


//
int traverse_list(pNode pHead,int* len){
	int cnt=0;
	pNode p=pHead->pNext;
	
	while(p){
		printf("%d ",p->data);
		p=p->pNext;
		++cnt;
	}
	printf("\n");
	*len=cnt;
	
	return 1;
}


//main
int main(){
	int length=0;
	pNode pHead=NULL;

	pHead=creat_list();//��ѭ�������� ��������ͷָ�� 
	
	traverse_list(pHead,&length);//����
	

	
	printf("length: %d \n",length);
	

	return 0;
}


