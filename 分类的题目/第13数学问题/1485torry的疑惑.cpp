/*
ab%c=((a%c)(b%c))%c
n< =100000
*/
#include <stdio.h>

int is_prime(int n){
	for(int i=2;i<=n/2;i++){
		if(n%i==0)
			return 0;
	}
	
	return 1;
} 

int main(){
		int n;
		scanf("%d",&n);
	int c=50000;
	int i=2,cnt=0;
	long long sum=1;
	
	while(1){
		if(is_prime(i)){
			cnt++;
			sum*=i%c;
			sum%=c;
			i++;
			
		}
		if(cnt==n)
			break;
		
	}	
	printf("%d",sum);	
	return 0;
}

