#include <cstdio>
#include <cstdlib>
typedef struct Link{
	int data;
	struct Link* next;
}link; //�ڵ��� ÿ����㶼��link�ṹ��
 
link* initLink(){
	link* pHead=NULL;//1����ͷָ�룬ָ��null
	
	link* pTemp=(link*)malloc(sizeof(link));//2�׽��
	//��ʼ���׽��
	int len;
		printf("����������ĳ���\n");
		scanf("%d",&len);
	int val,cnt=1;
		printf("�������%d������ֵ\n",cnt++);
		scanf("%d",&val); 
	pTemp->data=val;
	pTemp->next=NULL;
	pHead=pTemp;//ͷָ��ָ���׽��
	
	for(int i=2;i<=len;i++){
		//�����µĽ�㲢��ʼ�� i ָ��NULL 
		link* pNew=(link*)malloc(sizeof(link));//�����ڴ� 
		int val;
			printf("�������%d������ֵ\n",cnt++);
			scanf("%d",&val); 
		pNew->data=val;//a�������� 
		pNew->next=NULL;//a��ָ���� 
		
		//temp��a�����߼���ϵ
		//temp->next=pNew;
		//temp=a;ָ��pPre����ָ������������һ�� a�ڵ㣬����дtemp=aҲ��
		pTemp=pTemp->next=pNew; //��ɽ��� 
		 
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

