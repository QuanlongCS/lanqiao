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
	pNode pHeader=NULL;//ͷָ�� Node *
	
	pHeader=createList_T();//���������� ����ͷָ�� 
	show(pHeader); 
	printf("\n�����"); 
	insert(pHeader,2,9);	
	show(pHeader); 


	return 0;
} 
///////////////////////////////////////////////




pNode createList_T(){//β��� 
	//ͷָ�� 
	pNode pHeader = NULL;
	pHeader = (pNode)malloc(sizeof(Node));
	
	pNode pTail=pHeader; 
	pTail->next=NULL;
	// 
	int len;
		printf("�������ʼ��\n");
		scanf("%d",&len);
	int val;	
	for(int i=1;i<=len;i++){
			printf("�������%d�����ֵ \n",i);
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
	int pos=0;//��ʾval��λ��

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

