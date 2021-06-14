#include <stdio.h>
#include <stdlib.h>

typedef struct STU{
	int id;
	int score;
	struct STU *next;
}STU,* LL;

int N,M;


LL CreatT(int len){
	STU *L=(STU *)malloc(sizeof(STU));
	L->next=NULL;
	
	STU *pTail=L;//
	
	int id,score;
	for(int i=0;i<len;i++){
		scanf("%d%d",&id,&score);
		STU *pNew=(STU *)malloc(sizeof(STU));
		pNew->id=id;
		pNew->score=score;
		
		pTail->next=pNew;
		pTail=pNew;
	}
	pTail->next=NULL;

	return L;	
}
LL LLcat(LL a,LL b){
	LL c=(LL)malloc(sizeof(STU));
	c->next=NULL;
	
	STU* pCt=c;//
		
	a=a->next;
	while(a){
		pCt->next=a;
		pCt=a;
		
		a=a->next;	
	}//p A tail
	
	
	b=b->next;
	while(b){
		pCt->next=b;
		pCt=b;
		
		b=b->next;
	}	
	
	return c;	
}	
void show(LL a){
	a=a->next;
	while(a){
			
		printf("%d %d\n",a->id,a->score);
	a=a->next;
	}
	
}

void Sort(LL c){
	STU *pre = NULL;
    STU *cur = NULL;
    STU tmp;
 
    //选择法对结点进行排序
    for (pre = c->next; pre->next != NULL; pre = pre->next)
    {
        for (cur = pre->next; cur != NULL; cur = cur->next)
        {
            if (pre->id > cur->id)
            {
                //数据域和指针域都要进行交换
                //数据域交换
                tmp = *pre;
                *pre = *cur;
                *cur = tmp;
                //指针域交换
                tmp.next = pre->next;
                pre->next = cur->next;
                cur->next = tmp.next;
            }
        }
    }
	
	
	
	return ;
}
int main(){
	scanf("%d%d",&N,&M);
	
	STU *a=CreatT(N);
	STU *b=CreatT(M);
	
	STU *c=LLcat(a,b);

	Sort(c);
	show(c);
	return 0;
}

