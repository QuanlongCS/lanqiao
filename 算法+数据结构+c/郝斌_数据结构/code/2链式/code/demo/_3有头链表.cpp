#include <cstdio>
#include <cstdlib>
typedef struct List{
	int data;
	struct List* next;
}* pList;

pList initialList(){
	pList pHead=(pList)malloc(sizeof(pList));//ͷ�ڵ� 
	pList pTemp=pHead;

	int len;
		printf("�������\n");
		scanf("%d",&len);
		
	for(int i=1;i<=len;i++){
		int val=NULL;
		pList pNew=(pList)malloc(sizeof(pList));//�����±�
		
			printf("�������%d���������\n",i);
			scanf("%d",&val);
		
		//Ϊ��ǰ��㸳ֵ 
		pNew->data=val;
		pNew->next=NULL;
		
		//�����߼���ϵ 
		pTemp->next=pNew;
		pTemp=pNew; 
	}
	return pHead;
	
}
void sortList(pList pHead){
	pList p,q;
	for(int i=0,p=pHead->next; i<lenList(pHead) ;i++,p=p->next){
	}
	return ;
}
void show(pList pHead){

	while(pHead->next){

		pHead=pHead->next;
		printf("%d ",pHead->data);
	}printf("\n");
	return ;
} 
int lenList(pList pHead){
		int cnt=0;
		while(pHead->next){
		
		++cnt;
		pHead=pHead->next;
	
	}
	return cnt;
}
int main(){

	pList pHead=initialList();
	
	show(pHead);
	
	sortList(pHead);

	show(pHead);	
	
	
	
	return 0;
}

