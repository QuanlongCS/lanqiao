#include <cstdio>
#include <cstdlib>
typedef struct Link{
	int data;
	struct Link* next;
}link; //节点名 每个结点都是link结构体
 
link* initLink(){
	link* pHead=NULL;//1创建头指针，指向null
	
	link* pTemp=(link*)malloc(sizeof(link));//2首结点
	//初始化首结点
	int len;
		printf("请输入链表的长度\n");
		scanf("%d",&len);
	int val,cnt=1;
		printf("请输入第%d个结点的值\n",cnt++);
		scanf("%d",&val); 
	pTemp->data=val;
	pTemp->next=NULL;
	pHead=pTemp;//头指针指向首结点
	
	for(int i=2;i<=len;i++){
		//创建新的结点并初始化 i 指向NULL 
		link* pNew=(link*)malloc(sizeof(link));//开辟内存 
		int val;
			printf("请输入第%d个结点的值\n",cnt++);
			scanf("%d",&val); 
		pNew->data=val;//a的数据域 
		pNew->next=NULL;//a的指针域 
		
		//temp与a建立逻辑关系
		//temp->next=pNew;
		//temp=a;指针pPre总是指向新链表的最后一个 a节点，这里写temp=a也对
		pTemp=pTemp->next=pNew; //完成交接 
		 
	} 
	return pHead; 
	 
	
} 
int main(){
	link* pHead=initLink();

	while(pHead){	
	
		printf("%d ",pHead->data);
		pHead=pHead->next;
	}
	

	return 0;
}

