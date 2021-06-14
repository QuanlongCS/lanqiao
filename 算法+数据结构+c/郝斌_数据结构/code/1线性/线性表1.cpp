#include <stdio.h>
#include <stdlib.h>
struct Arr{
	int* pBase;//数组头
	int len;//容纳个数 
	int cnt;//当前数组有效个数 
}; 

//方法
void init_arr(struct Arr* pArr,int len);//初始化 
bool append_arr(struct Arr* pArr,int val);//
bool insert_arr(struct Arr* pArr,int pos,int val);//
bool delete_arr(struct Arr* pArr,int pos,int* pVal);//
bool get(); 
bool is_empty(struct Arr* pArr);//
bool is_full(struct Arr* pArr);//
void sort_arr(struct Arr* pArr);
void show_arr(struct Arr* pArr);//
void reverse_arr(struct Arr* pArr);//

find();
deleteAll();

//main 
int main(){//main
	struct Arr arr;
	int val;
	init_arr(&arr,10);
	append_arr(&arr,109);
		append_arr(&arr,105);
			append_arr(&arr,101);
				append_arr(&arr,108);
					append_arr(&arr,110);
	
	show_arr(&arr);
	insert_arr(&arr,5,111);
	printf("___________________\n");
	show_arr(&arr);
	delete_arr(&arr,5,&val);
	show_arr(&arr);
	printf("dedl: %d\n",val);
	reverse_arr(&arr);
	show_arr(&arr);
	sort_arr(&arr);
	printf("sort:");
	show_arr(&arr);
	return 0;
}
//main



//function
void init_arr(struct Arr* pArr,int len){//创建一个数组 
	pArr->pBase=(int*)malloc(sizeof(int) * len);//malloc否则返回null 
	if(NULL==pArr->pBase) {
		printf("malloc error \n");
		//exit(-1);//终止程序 
	}else{
		pArr->len=len;
		pArr->cnt=0;
	} 
	return ; 
}
bool is_empty(struct Arr* pArr){
	if(pArr->cnt==0){
		return true;
	}else{
		return false;
	}
}

void show_arr(struct Arr* pArr){//show
	if(is_empty(pArr)){
		printf("array empty\n");
	}else{
		for(int i=0;i<pArr->cnt;i++){
			printf("%d ",*(pArr->pBase+i));//pArr[i]
		}printf("\n");
	}
}

bool is_full(struct Arr* pArr){//is full
	if(pArr->cnt==pArr->len){
		
		return true;
	}else{
		
		return false;	
	}
}

bool append_arr(struct Arr* pArr,int val){
	if(is_full(pArr)){
		printf("the array is full\n");
		return false;
	}else{
		
		*(pArr->pBase + pArr->cnt++)=val;
		//pArr->cnt++;
		return true;
	}
}

bool insert_arr(struct Arr* pArr,int pos,int val){
	if(pArr->cnt+1 > pArr->len || pos<1 ||  pos > pArr->cnt+1 ){
		printf("out of numberd\n");
		return false;	
	}else{
	
	//	pArr->cnt++;
		for(int i=pArr->cnt-1;i>=pos-1;i--){
			pArr->pBase[i+1]=pArr->pBase[i];
		}
		pArr->cnt++;
		(pArr->pBase[pos-1])=val;
		return true;
	}	
}

bool delete_arr(struct Arr* pArr,int pos,int* pVal){
	*pVal=pArr->pBase[pos-1];
	for(int i=pos;i<pArr->cnt;i++){
		pArr->pBase[i-1]=pArr->pBase[i];
	}
	
	pArr->cnt--;
	return true;
}

void reverse_arr(struct Arr* pArr){
	for(int i=0;i<pArr->cnt;i++){
		for(int j=i;j<pArr->cnt;j++){
			int temp=pArr->pBase[i];
			pArr->pBase[i]=pArr->pBase[j];
			pArr->pBase[j]=temp;
		}
	}
	return ;
}
void sort_arr(struct Arr* pArr){
	for(int i=0;i<pArr->cnt;i++){
		for(int j=i;j<pArr->cnt;j++){
			if(pArr->pBase[i]>pArr->pBase[j]){
				int temp=pArr->pBase[i];
				pArr->pBase[i]=pArr->pBase[j];
				pArr->pBase[j]=temp;
			}
		}
	}
}
