#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int cnt[10];
	for(int i=0;i<10;i++)//��¼0~9 
		scanf("%d",&cnt[i]);
		
	for(int i=1;i<10;i++){
		if(cnt[i]>0){
			printf("%d",i);
			cnt[i]--;
			break;
		}
	} 
	
	for(int i=0;i<10;i++){//�����Ӧ���� 
		for(int j=0;j<cnt[i];j++){
			printf("%d",i);
		}
	}
	
	return 0;
}

