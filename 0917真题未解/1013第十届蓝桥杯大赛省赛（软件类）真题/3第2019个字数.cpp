#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int isprime(int n){
	for(int i=2;i<=n/i;i++){
		if(n%i==0)
			return 0;
			
	}
	
	return 1;
} 
int main(){
	int cnt=0;
	
	for(int i=2;i<=5050*2*5;i++){
		if(isprime(i)){
			++cnt;
			cout<<cnt<<" : "<<i<<endl;
		}
	}
	//17569
	return 0;
}

