#include <stdio.h>
typedef struct Node{

	int data;
	struct node *next;
}Node, *cLL;

cLL createL(){
	Node *head=(Node*)malloc(sizeof(Node));
	head->next=NULL;

	return head;
}
int appendL(Node *head){
	int data;
	printf("请输入待插入元素\n");
	scanf("%d",&data);
	
	Node *node=createL();
	node->data=data;
	
	if(head!=NULL){//非空 
		Node *tail=head;
		while(tail->next!=head){
			tail=tail->next;
		} 
		tail->next=node;
		node->next=head;
	return 1;
	}
	
	printf("empty\n");
	return 0;
}
cLL insertL(cLL head,int pos,int data){
	cLL pNew=createL();//新结点 
	pNew->data=data;
	
	cLL p=head;
	cLL pre=p; 
	
	if(head!=NULL){
		for(int i=1;i<pos;i++){
			pre=pre->next; 
		}
		pNew->next=pre->next;
		pre->next=pNew;
		return p;
	}
	
	return p;
}

int delL(cLL head,int del){
	cLL temp=head;//临时结点存储头结点信息 为了找到退出点
	
	cLL ptr=head->next;
	
	while(ptr!=head){
		if(ptr->data==del){
			if(ptr->next==head){
				temp->next=head;
				free(ptr);
				return 1
			}
			temp->next=ptr->next;
			free(ptr);
			printf("删除成功\n");
			return 1;
			
		}
		temp=temp->next;
		ptr=ptr->next;
		
	}
	printf("没找到\n");
	return 0;
	 
}
int main(){
//////////初始化头结点//////////////
    Node *head=createL();
    head->next=head;






	return 0;
}

