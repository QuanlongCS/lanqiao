#include <stdio.h>
#include <stdlib.h>
typedef struct NODE{
	int data;
	struct NODE* next;
}Node,* pNode; 


pNode createList_T();
void show(pNode pHeader);
int insert(pNode pHeader,int pos,int val);	
int find_(pNode pHeader,int val);
 
 

///////////////////////////////////////////////// 
int main(){
	pNode pHeader=NULL;//头指针 Node *
	
	pHeader=createList_T();//创建单链表 返回头指针 
	show(pHeader); 
	printf("\n插入后"); 
	insert(pHeader,2,9);	
	show(pHeader); 


	return 0;
} 
///////////////////////////////////////////////




pNode createList_T(){//尾结点 
	//头指针 
	pNode pHeader = NULL;
	pHeader = (pNode)malloc(sizeof(Node));
	
	pNode pTail=pHeader; 
	pTail->next=NULL;
	// 
	int len;
		printf("请输入初始表长\n");
		scanf("%d",&len);
	int val;	
	for(int i=1;i<=len;i++){
			printf("请输入第%d个结点值 \n",i);
			scanf("%d",&val);
		
		pNode newNode=(pNode)malloc(sizeof(Node));
		newNode->data=val;
		newNode->next=NULL;
		
		pTail->next=newNode;
		pTail=newNode;
	}
	return pHeader;
}
void show(pNode pHeader){
	pHeader=pHeader->next;
	printf("show: "); 
	while(pHeader){
		printf("%d ",pHeader->data);
		pHeader=pHeader->next;
	}
	printf("\n");
	
}
int insert(pNode pHeader,int pos,int val){//pos=2 
	pNode node=(pNode)malloc(sizeof(NODE));
	
	pHeader=pHeader->next;
	while(pHeader){
		pos++;
		if(pHeader->data==val){
			//successful 
		}
		pHeader=pHeader->next;
	} 
	

	return 1;	
}
int find_(pNode pHeader,int val){
	int pos=0;//表示val的位置

	pHeader=pHeader->next;
	while(pHeader){
		pos++;
		if(pHeader->data==val){
			return pos;//successful 
		}
		pHeader=pHeader->next;
	} 
	return 0;//failure
} 

