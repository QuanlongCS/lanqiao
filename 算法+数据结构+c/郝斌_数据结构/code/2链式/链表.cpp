#include <stdio.h>
#include <stdlib.h>
//���������� 
typedef struct Node{
	int data;//ElemType 
	struct Node *next;//ָ���� 
}Node,*LinkedList;//Node��ʾ������ͣ�linkedlistָ��node������͵�ָ������ 

//************************************************************************

LinkedList creatH(int length){//ͷ�巨ʼ�����µĽ�����ͷ�� 
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
	//����A e I;
	//e�Ǵ�������{ 
	//		1:eָ��I��e->next=A->next;
	//		2:Aָ��e��A->next=e 
	}
	//ͷ�壨���յĽ��������ģ�like stack ,the 1 elem is the taill 
	return L;
}
LinkedList creatT(int length){//ÿ�ΰ��µĽ����ں��� 
	Node* L=(Node*)malloc(sizeof(Node));
	L->next=NULL;
	
	Node* pTail=L;//��ʼʱpTailָ��ͷ��㣬��֮��ʼ��ָ��β
	int val;
	
	for(int i=0;i<length;i++){
		scanf("%d",&val);
		Node *pNew=(Node*)malloc(sizeof(Node));
		pNew->data=val;
		
		pTail->next=pNew;//tail����β��� new���½��;��β���ָ���½�� 
		pTail=pNew;		 //�ٰ�new���β��� 
		//1Head  2Tail 3New(��)  
		//tail->=Newβָ��ָ�������Ԫ�� 
		//tail=new;��new����µ�βָ�� 
	}
	pTail->next=NULL;//β���ָ����Ӧ���ǿյ����� 
	return L;
}
LinkedList Replace(LinkedList L,int x,int k){//L��ֵΪx��Ԫ�س�Ϊk 
	Node* node=L->next;//L��ͷָ�� 
		int i=0;
	while(p){
		if(p->data==x){
			p->data=k;
		}
		p=p->next;
	}
	
	return L;
}
LinkedList Insert(LinkedList L,int i,int x){//��L�е�iλ��֮ǰ����x;
	 
	Node* pre=L;			//ǰ�����
	// L=1 2 3 4 5;insert(L,3,x) 
	int tempi=0;
	//�������ص� 
	for(tempi=1;tempi<i;tempi++){//1~i֮ǰͣ����,�ߵ��˵ڶ��������Ǵ�����λ 
		pre=pre->next;	//���ҵ�iλ��ǰ�� 
	}//tempi=2;preλ�ڵڶ������ 
	
	Node *pNew=(Node *)malloc(sizeof(Node));//������Ϊpnew 
	pNew->data=x;
	//�������ͷ�巨�� 
	pNew->next=pre->next;
	pre->next=pNew;//����ο�ͷ�巨 ����һ��AeI��e�������� 
	//		1:eָ��I��e->next=A->next;
	//		2:Aָ��e��A->next=e 
	
	return L;
} 
LinkedList Delete(LinkedList L,int 	x){//��L��ɾ��Ԫ��ֵx
	//��L=12345; f(L,3) 
	Node *node,*pre;//p������ 
	
	node=L->next;
	while(node->data!=x){
		pre=node;//node�ǵ�ǰ���,������ 
		
		node=node->next;//ѭ��ǰ�� 
	}// 1 2;pre=2;2->next=3->next;2ֱ��ָ��4����3 
	
	pre->next=node->next;//ǰ�����ֱ��ָ��ɾ����Ľ�� 
	free(node);//�ͷ�p�ռ� 
	
	return L; 
} 
void Print(LinkedList L){
	Node* p=L->next;
	int i=0;
	while(p){
		printf("�� %d ��Ԫ��ֵΪ %d \n",++i,p->data);
		p=p->next;
	}
	return ;
}

//************************************************************************

int main(){
//	printf("ͷ�巨,������Ԫ��ֵ\n"); 
//	LinkedList L=creatH(5);
//	Print(L);
//	printf("β�巨��������Ԫ��ֵ\n"); 
//	LinkedList L=creatT(5);

//	printf("\n�滻����");//L��ֵΪx��Ԫ�س�Ϊk 
//	Replace(L,3,0); 

//	Insert(L,2,0);��L�е�iλ��֮ǰ����x; ��1��ʼ���� 

//	Delete(L,3); 
//	Print(L);
	return 0;
}
