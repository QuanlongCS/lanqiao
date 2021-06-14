#include <stdio.h>
#include <stdlib.h>
//定义结点类型 
typedef struct Node{
	int data;//ElemType 
	struct Node *next;//指针域 
}Node,*LinkedList;//Node表示结点类型，linkedlist指向node结点类型的指针类型 

//************************************************************************

LinkedList creatH(int length){//头插法始终让新的结点放在头部 
	Node *L=(Node*)malloc(sizeof(Node));
	L->next=NULL;
	int val;
	
	for(int i=0;i<length;i++){
		scanf("%d",&val);
		Node* pNew=(Node*)malloc(sizeof(Node));
		pNew->data=val;
		
		// 1L   2L->Next 1.5e  
		pNew->next=L->next;
		L->next=pNew;
	//假设A e I;
	//e是待插入结点{ 
	//		1:e指向I：e->next=A->next;
	//		2:A指向e：A->next=e 
	}
	//头插（最终的结果是逆序的）like stack ,the 1 elem is the taill 
	return L;
}
LinkedList creatT(int length){//每次把新的结点放在后面 
	Node* L=(Node*)malloc(sizeof(Node));
	L->next=NULL;
	
	Node* pTail=L;//开始时pTail指向头结点，在之后始终指向尾
	int val;
	
	for(int i=0;i<length;i++){
		scanf("%d",&val);
		Node *pNew=(Node*)malloc(sizeof(Node));
		pNew->data=val;
		
		pTail->next=pNew;//tail本是尾结点 new是新结点;让尾结点指向新结点 
		pTail=pNew;		 //再把new变成尾结点 
		//1Head  2Tail 3New(待)  
		//tail->=New尾指针指向待插入元素 
		//tail=new;把new变成新的尾指针 
	}
	pTail->next=NULL;//尾结点指针域应该是空的所以 
	return L;
}
LinkedList Replace(LinkedList L,int x,int k){//L中值为x的元素成为k 
	Node* node=L->next;//L是头指针 
		int i=0;
	while(p){
		if(p->data==x){
			p->data=k;
		}
		p=p->next;
	}
	
	return L;
}
LinkedList Insert(LinkedList L,int i,int x){//在L中第i位置之前插入x;
	 
	Node* pre=L;			//前驱结点
	// L=1 2 3 4 5;insert(L,3,x) 
	int tempi=0;
	//这里是重点 
	for(tempi=1;tempi<i;tempi++){//1~i之前停下来,走到了第二个结点就是待插入位 
		pre=pre->next;	//查找第i位的前驱 
	}//tempi=2;pre位于第二个结点 
	
	Node *pNew=(Node *)malloc(sizeof(Node));//插入结点为pnew 
	pNew->data=x;
	//这里就是头插法了 
	pNew->next=pre->next;
	pre->next=pNew;//这里参考头插法 假设一个AeI；e待插入结点 
	//		1:e指向I：e->next=A->next;
	//		2:A指向e：A->next=e 
	
	return L;
} 
LinkedList Delete(LinkedList L,int 	x){//在L中删除元素值x
	//设L=12345; f(L,3) 
	Node *node,*pre;//p待查找 
	
	node=L->next;
	while(node->data!=x){
		pre=node;//node是当前结点,存起来 
		
		node=node->next;//循环前进 
	}// 1 2;pre=2;2->next=3->next;2直接指向4跳过3 
	
	pre->next=node->next;//前驱结点直接指向被删除后的结点 
	free(node);//释放p空间 
	
	return L; 
} 
void Print(LinkedList L){
	Node* p=L->next;
	int i=0;
	while(p){
		printf("第 %d 个元素值为 %d \n",++i,p->data);
		p=p->next;
	}
	return ;
}

//************************************************************************

int main(){
//	printf("头插法,请输入元素值\n"); 
//	LinkedList L=creatH(5);
//	Print(L);
//	printf("尾插法：请输入元素值\n"); 
//	LinkedList L=creatT(5);

//	printf("\n替换函数");//L中值为x的元素成为k 
//	Replace(L,3,0); 

//	Insert(L,2,0);在L中第i位置之前插入x; 从1开始计数 

//	Delete(L,3); 
//	Print(L);
	return 0;
}
