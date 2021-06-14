#include <stdio.h>
#include <malloc.h> 
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* pNext;
	
}Node,* pNode;//新的类型名字 结构 与 结构指针 


// 
pNode creat_list(){
	
	pNode pHead=(pNode)malloc(sizeof(Node));//头结点 
	
	pNode pTail=pHead;//* 
	pTail->pNext=NULL;//pTail pHead 都指向头节点 
	
	
	int len;
	printf("请输入链表结点个数： \n");
	scanf("%d",&len);
	
	for(int i=0;i<len;i++){
		int val;
		printf("请输入第 %d 结点的值：",i);
		scanf("%d",&val);
		
		pNode pNew=(pNode)malloc(sizeof(Node));//新结点 
		
		pNew->data=val;//1 把暂存的val放到新结点的数据域 
		pTail->pNext=pNew;//2 pTail指针域指向pNew 
		pNew->pNext=NULL;//3 pNew的指针域清空 
		pTail=pNew; //4 像tail赋值时候 pTail=pHead 把pew的变成pTail 
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

	pHead=creat_list();//非循环单链表 返回链表头指针 
	
	traverse_list(pHead,&length);//遍历
	

	
	printf("length: %d \n",length);
	

	return 0;
}


