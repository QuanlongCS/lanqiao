#include <cstdio>
#include <iostream>
using namespace std;
int a[11],hash[11];
int n;

void permutate(int index){//当次全排列首位 1... 2... 3... 
	if(index==n+1){
		for(int i=1;i<=n;i++){
			printf("%d",a[i]);
		}
		printf("\n");
	}


	for(int i=1;i<=n;i++){
		if(hash[i]==0){
			a[index]=i;
			hash[i]=1;
			
			permutate(index+1);
			hash[i]=0;
		}
	}

	return ;

}

int main(){
	
	n=3;
	permutate(1); 
	
	
	return 0;
}

//123 132
//213 231
//312 321
