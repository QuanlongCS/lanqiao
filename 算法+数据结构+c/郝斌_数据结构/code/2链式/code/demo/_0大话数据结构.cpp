#include <cstdio>
#include <cstdlib>
/*��������ʽ�洢*/
typedef struct Node{
	int data;
	struct Node *next;
}Node;
typedef struct Node *LinkList;// LinkList* 
typedef int ElemType;

//	GetElem(LinkList L,int i,ElemType *e);
//	insert(linkList* L,int i,ElemType e);
//	ListDelete(LinkList *L,int i,int ElemType *e);
	CreateListHead(LinkList *L,int n);
//	CreateListTail(LinkList *L,int n);
//	Clearlist(LinkList *L);
		
int main(){
	LinkList pHeader=NULL;
	

	CreateListHead(LinkList pHeader,int 10);
	while(pHeader){
		printf("%d ",pHeader->data);
		pHeader=pHeader->next;
	}
//	CreateListTail(LinkList *L,int n);
//	
//	GetElem(LinkList L,int i,ElemType *e);
//	insert(linkList* L,int i,ElemType e);
//	ListDelete(LinkList *L,int i,int ElemType *e);

	Clearlist(LinkList *L);
	return 0;
}

//����L���� ��1<= i <=Listlength(L)
//return value of "i" with "e" in L
Status GetElem(LinkList L,int i,ElemType *e){//���ص�i��Ԫ�ص�ֵ 

	int j=1;//������ 
	linkList p = L->next;//�������p����pָ��L�ĵ�һ����� 
	 
	
	while(p && j<i){//*p��Ϊ�� && j������iʱ
		p=p->next;//��pָ����һ����� 
		++j; 
	} 
	if(!p || j>i ){
		print("There exits not %d ",i); //��i��Ԫ�ز����� 
			return ERROR;
	}
	
	*key=p->data;//ȡ��i��Ԫ�� 
	return OK;	
	/*��ͷ��ʼ��ֱ����i��Ԫ��*/
}



//��ʼ����ͬ�ϡ���L�е�iλ֮ǰ����e ��L+1 
bool insert(linkList* L,int i,ElemType e){
 
	int j=1;
	linkList p,s;
	p=*L;
	
	while(p && j<i){
		p=p->next;
		++j;
	}
	if(!p || j>i){
		return ERROR;//i������ 
	} 
	s=(LinkList)malloc(sizeof(Node));
	//����һ���½��(��ͬ����ͨ��㣬��Ϊ�ǲ����½�㣬�ڴ�λ�ò���Ҫ) 
	//���ڴ��e����,s��� 
	s->data=e;
//	
	s->next=p->next;
	p->next=s; 
//s->next=p->next; p->next=s;
	return OK;
	

}
 
Status ListDelete(LinkList *L,int i,int ElemType *e){
	int j=1;
	LinkList p,q;
	p=*L;
	
	while(p->next && j<i){
		p=p->next;
		++j;
	}
	
	if(!(p->next) || j>i)
		return ERROR;//��i������
		
	q=p->next;			//p->q>q->next 
						//q�ǵڶ��� 
	p->next=q->next;	//q�ĺ��==3 �� ��ֵ��p�ĺ��Ҳ����2
						//2=3;=>>  1->3 
	
	*e=q->data;
	return OK; 
		
}
//ͨ�����ϵ� insert �� del get���Ƿ������Ƕ������������
//��һ���ֱ������ҵ�i�����ڶ����ֲ����ɾ��
//���ڲ���ɾ��ԽƵ���Ĳ��� �������Ч�ʾ�Խ���� 



//����������H
void CreateListHead(LinkList L,int n){
	//n��Ԫ��
	LinkList p;
	
	L=(LinkList)malloc(sizeof(Node));
	L->next=NULL;
	
	for(int i=0;i<n;i++){
		p=(LinkList)malloc(sizeof(Node));
		p->data=i;
		p->next=L->next;
		L->next=p;
	} 
	//ͷ�巨ʼ�����½����ͷ��λ�� 
	
}
void CreateListTail(LinkList *L,int n){
	LinkList p,r;
	*L=(LinkList)malloc(sizeof(Node));
	r=*L;//rָ��β��
	for(int i=0;i<n;i++){
		p=(Node*)malloc(sizeof(Node));
		p->data=i;
		r->next=p;
		r=p;
	} 
	r->next=NULL;
	
}

//���ɾ������ 
//1�������p q
//2����һ����㸳ֵp
	//3ѭ����
	//		����һ����㸳ֵ��q 
	//		�ͷ�p
	//		��q��ֵ��p 
int Clearlist(LinkList L){
	LinkList p,q;
	p=(*L)->next;
	while(p){
		q=p->next;
		free(q);
		p=q;
	}
	(*L)->next=NULL;
	
	return 1;
}	


