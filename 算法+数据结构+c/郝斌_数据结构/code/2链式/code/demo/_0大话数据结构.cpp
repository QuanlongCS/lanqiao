#include <cstdio>
#include <cstdlib>
/*单链表链式存储*/
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

//假设L存在 ，1<= i <=Listlength(L)
//return value of "i" with "e" in L
Status GetElem(LinkList L,int i,ElemType *e){//返回第i个元素的值 

	int j=1;//计数器 
	linkList p = L->next;//声明结点p，让p指向L的第一个结点 
	 
	
	while(p && j<i){//*p不为空 && j不等于i时
		p=p->next;//让p指向下一个结点 
		++j; 
	} 
	if(!p || j>i ){
		print("There exits not %d ",i); //第i个元素不存在 
			return ERROR;
	}
	
	*key=p->data;//取第i个元素 
	return OK;	
	/*从头开始找直到第i个元素*/
}



//初始条件同上。在L中第i位之前插入e ，L+1 
bool insert(linkList* L,int i,ElemType e){
 
	int j=1;
	linkList p,s;
	p=*L;
	
	while(p && j<i){
		p=p->next;
		++j;
	}
	if(!p || j>i){
		return ERROR;//i不存在 
	} 
	s=(LinkList)malloc(sizeof(Node));
	//生成一个新结点(不同于普通结点，因为是插入新结点，内存位置不重要) 
	//用于存放e数据,s结点 
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
		return ERROR;//第i不存在
		
	q=p->next;			//p->q>q->next 
						//q是第二个 
	p->next=q->next;	//q的后继==3 ， 赋值给p的后继也就是2
						//2=3;=>>  1->3 
	
	*e=q->data;
	return OK; 
		
}
//通过以上的 insert 和 del get我们发现它们都有两部分组成
//第一部分遍历查找第i个，第二部分插入和删除
//对于插入删除越频繁的操作 单链表的效率就越明显 



//建立单链表H
void CreateListHead(LinkList L,int n){
	//n个元素
	LinkList p;
	
	L=(LinkList)malloc(sizeof(Node));
	L->next=NULL;
	
	for(int i=0;i<n;i++){
		p=(LinkList)malloc(sizeof(Node));
		p->data=i;
		p->next=L->next;
		L->next=p;
	} 
	//头插法始终让新结点在头的位置 
	
}
void CreateListTail(LinkList *L,int n){
	LinkList p,r;
	*L=(LinkList)malloc(sizeof(Node));
	r=*L;//r指向尾部
	for(int i=0;i<n;i++){
		p=(Node*)malloc(sizeof(Node));
		p->data=i;
		r->next=p;
		r=p;
	} 
	r->next=NULL;
	
}

//如何删除整表？ 
//1声明结点p q
//2将第一个结点赋值p
	//3循环：
	//		将下一个结点赋值给q 
	//		释放p
	//		将q赋值给p 
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


