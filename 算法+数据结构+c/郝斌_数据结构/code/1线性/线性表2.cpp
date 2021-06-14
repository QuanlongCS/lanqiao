#include <stdio.h>
#include <stdlib.h>
//定义结构 start
typedef struct {
	int* head;
	int len;//可用长度 
	int tail;//最大长度 
}LL; 
//定义结构  end

//IninList start
bool IninList(LL* pLL,int len){
	pLL->head=(int* )malloc(sizeof(int)*len);
	// is_NULL?
	if(pLL==NULL){
		printf("IninList : malloc error\n");
		return false;
	}else{
		pLL->len=0;
		pLL->tail=len-1;
		printf("IninList : Success\n");
		return true;
	}			 
}

bool isEmpty(LL* pLL){
	if(pLL->len==0){
	
		return true;
	}else{
	
		return false;
	}	
}
bool isFull(LL* pLL){
	if(pLL->len > pLL->tail){
	
		return true;
	}else{
	
		return false;
	} 
		
}
bool Append(LL* pLL,int val){
	if(isFull(pLL)){
		printf("isFull\n");
		return false;
	}
	else{
		pLL->head[pLL->len++]=val;
		return true;
	}	
}
bool Show(LL* pLL){
	if( isEmpty(pLL) ){
		
		return false;
	}else{
	
		for(int i=0;i<pLL->len;i++){
			printf("%d ",pLL->head[i]);
		}printf("\n");
		return true;
	}
}
bool Insert(LL* pLL,int pos,int val){
	if(isFull(pLL)){
		printf("Full\n");		
		return false;
	}else{
		for(int i=pLL->len;i>=pos;i--){
			pLL->head[i+1]=pLL->head[i];	
		}
		pLL->len++;
		pLL->head[pos]=val;
		return true;
	}
}
bool Delete(LL* pLL,int pos,int* delVal){
	if(pLL->head[pos]==NULL)
		return false;
	else{
			*delVal=pLL->head[pos];
		for(int i=pos;i<pLL->len;i++){
			pLL->head[i]=pLL->head[i+1];			
		}
		pLL->len--;
	
		return true;
	}
}
void Reverse(LL* pLL){
	for(int i=0;i<pLL->len;i++){
		for(int j=i;j<pLL->len;j++){
			int temp=pLL->head[i];
			pLL->head[i]=pLL->head[j];
			pLL->head[j]=temp;
		
		}
	}
	Show(pLL);
	return ;
}
void Sort(LL* pLL){
	for(int i=0;i<pLL->len;i++){
		for(int j=i;j<pLL->len;j++){
			
			if(pLL->head[i] > pLL->head[j]){			
				int temp=pLL->head[i];
				pLL->head[i]=pLL->head[j];
				pLL->head[j]=temp;	
			}
		
		}
	}
	Show(pLL);
}


int main(){//main start
	LL ll;
	LL* pLL=&ll;	
	
	IninList(pLL,5);//初始化
	 
//	isEmpty (pLL);
//	isFull  (pLL);
	Append  (pLL,10);
	Append  (pLL,111);
	Append  (pLL,33);
	Append  (pLL,1);
	
	Show    (pLL);	
	Insert(pLL,2,2); 
	Show(pLL);
	int val;
//	Delete(pLL,2,&val);
//	Show(pLL);
//	printf("%d",val);
	
	Reverse(pLL);
	
	Sort(pLL);
	return 0;
}

