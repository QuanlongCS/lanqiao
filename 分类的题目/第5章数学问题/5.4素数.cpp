#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
 
using namespace std;
//2~n-1 
bool isPrime(int n){
	
	if(n<=1)return false;//特判
	 
	int sqr=(int)sqrt(1.0*n);//根号n 
	
	for(int i=2;i<=sqr;i++){//遍历 
	// longlong i=2; i*i<=n
		if(n%i==0)return false; 
	
	}
	return true;//是素素 
}

int prime_list[105];int cnt=0;//素素的个数
bool hash[105];//true or false
//承受能力是10^5 
void Find_Prime(int n){//1~n之间的素素
	for(int i=2;i<n;i++){
		if(isPrime(i)){
			prime_list[cnt++]=i;//放到素素表里面 
			hash[i]=true;//标记这个位置为素素 
		}
	}	
	
	return ;
 
}

 
 
int main(){
	Find_Prime(100);
	for(int i=0;i<cnt;i++){
		printf("%d ",prime_list[i]);
	}

	return 0;
}

