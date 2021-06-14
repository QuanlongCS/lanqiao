#include <stdio.h>
#include <stdlib.h>
typedef struct doubleL{
	struct doubleL *pre;
	int data;
	struct doubleL *next;
}doubleL, *LL;

LL creatL(){
	int number,pos=1,data;
	printf("输入创建结点大小\n"); 
	scanf("%d",&number);
	//1创建头节点 
	doubleL *head=(doubleL*)malloc(sizeof(doubleL));
	head->next=NULL;head->pre=NULL;
	printf("请输入第%d个数据\n",pos++); 
	scanf("%d",&data);
	head->data=data;
	
	
	doubleL *tail=head;
	while(pos<=number){//2创建新结点
		doubleL *node=(doubleL*)malloc(sizeof(doubleL));
		node->pre=NULL;node->next=NULL;
		printf("请输入第%d个数据\n",pos++); 
		scanf("%d",&data);
		node->data=data;
		
		tail->next=node;
		node->pre=tail;
		tail=tail->next;
		//		
	} 
	return head;	
} 
LL insertL(LL head,int pos,int data){
	//
	doubleL *pNew=(doubleL*)malloc(sizeof(doubleL));
	pNew->data=data;
	pNew->pre=NULL;pNew->next=NULL;
	if(pos==1){//那pos之前就是头节点pos-1=0
		pNew->next=head;
		head->pre=pNew;
		head=pNew;
	}else{
		doubleL *node=head;//pos-1结点 
		for(int i=1;i<pos-1;i++){
			node=node->next;//指向下一个 
		}
		if(node->next==NULL){//到尾了 
			node->next=pNew;
			pNew->pre=node; 
		}else{//general case
			node->next->pre=pNew;
			pNew->next=node->next;
			node->next=pNew;
			pNew->pre=node;
		} 
		
	} 
	
	return head; 
}

LL delL(LL head,int data){
	
	doubleL *node=head;
	
	while(node){
		if(node->data==data){
			node->pre->next=node->next;
			node->next->pre=node->pre;
			free(node);
			printf("删除成功\n");
		
		return head;	
		}
		
		node=node->next;
	}
	printf("删除失败没找到\n");
	
	return head;
} 
int main(){
	LL L=creatL();
//	insertL(L,3,0);
	
	
	delL(L,3);
	
	while(L){
		printf("%d ",L->data);
		L=L->next;
	}
	return 0;
}

