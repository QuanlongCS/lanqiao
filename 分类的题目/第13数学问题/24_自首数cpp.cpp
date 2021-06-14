/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int f(int i){
	int cnt=1;
	while(i){
	
		cnt*=10;
		
		i/=10;
	}
	return cnt;
}

int main(){
	
	for(long long i=0;i<=200000;i++){
		
			
			
		if( (i*i-i) % f(i) ==0 )
			printf("%lld ",i);
	} 
	
	return 0;
}

