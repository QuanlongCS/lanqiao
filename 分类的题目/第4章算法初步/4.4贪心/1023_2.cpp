#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int cnt[10];
	for(int i=0;i<10;i++)//记录0~9 
		scanf("%d",&cnt[i]);
		
	for(int i=1;i<10;i++){
		if(cnt[i]>0){
			printf("%d",i);
			cnt[i]--;
			break;
		}
	} 
	
	for(int i=0;i<10;i++){//输出对应个数 
		for(int j=0;j<cnt[i];j++){
			printf("%d",i);
		}
	}
	
	return 0;
}

