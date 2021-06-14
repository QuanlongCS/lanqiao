#include <cstdio>
#include <iostream>
using namespace std;
//空间换时间
 

int hashtable[100010]={0};
 
 
int main(){
	int n,m;
	int x;
//给出n个数 再给m个数
//是否m每个数是否存在于n 

	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		hashtable[x]=1;//x(1~100010)存在于这个范围中且唯一 
		//hashtable[x]++;
	}
	
	for(int i=0;i<m;i++){//wait for select
		scanf("%d",&x);
		if(hashtable[x]){
			printf("yes\n");
		}else{
			printf("no\n");
		}
		
	}
	 

	return 0;
}

