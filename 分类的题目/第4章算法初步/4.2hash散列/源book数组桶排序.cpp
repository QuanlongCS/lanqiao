#include <cstdio>
#include <iostream>
using namespace std;
//�ռ任ʱ��
 

int hashtable[100010]={0};
 
 
int main(){
	int n,m;
	int x;
//����n���� �ٸ�m����
//�Ƿ�mÿ�����Ƿ������n 

	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		hashtable[x]=1;//x(1~100010)�����������Χ����Ψһ 
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

