/*

*/
#include <stdio.h>

int is_prime(int n){
	for(int i=2;i<=n/2;i++)
		if(n%i==0)
			return 0;
			
	return 1;
} 
int main(){
	int n;
	scanf("%d",&n);
	int cnt=0;
	for(int i=2;i<=n;i++){
		if(is_prime(i))
			cnt+=i;
	} 
	printf("%d",cnt);
	return 0;
}

