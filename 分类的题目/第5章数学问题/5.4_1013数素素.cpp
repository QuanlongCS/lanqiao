#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n){
	
	if(n<=1)return false;//ÌØÅÐ
	
	for(int i=2;i*i<=n;i++){//±éÀú 
		if(n%i==0)return false;
	}
	
	return true;//ÊÇËØËØ 
}

void prime_list(int m,int n){
	int cnt=0;
	int cnt_m=0,cnt_n=0;
	
	for(int i=2;i<10005;i++){
			
	
		if(is_prime(i)){
			cnt_m++;//1 2 3 4 5
			
			if(cnt_m>=m){			
				cnt++;
				cnt_n++;
				if(cnt%9==0)
					printf("%d",i);
				else 
					printf("%d ",i);
				if(cnt%10==0)
				printf("\n");
				
				if(cnt_m >= n)
				return ;
			}	
			
		}
				
	
	
	}
	
	
	return ;
}

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	
	prime_list(m,n);
	
	
	
	return 0;
}

