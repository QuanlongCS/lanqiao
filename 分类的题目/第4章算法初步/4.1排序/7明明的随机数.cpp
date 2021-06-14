#include <cstdio>
#include <iostream>
using namespace std;
int n;

int book[10005]; 
int main(){
	int t;int cnt=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		

		if(book[t]==0){
			cnt++;
			book[t]=1;
		}
			
	}


	printf("%d\n",cnt);			
	for(int i=0;i<1005;i++){
		if(book[i]){
					
			printf("%d ",i);
		}
				
	}
	return 0;
}

