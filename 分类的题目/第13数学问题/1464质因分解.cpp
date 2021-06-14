/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
bool is_prime(int n){
	for(int i=2;i<=n/2;i++){
		if(n%i==0)
			return false;
	}
	
	return true;
}

int main(){
	int a,b;
	cin>>a>>b;
	int a[10005];
	int cnt=0;
	
	for(int i=a;i<=b;i++){
		if(is_prime(i))
			a[cnt++]=i;	
	} 
	
	for(int i=a;i<=b;i++){
		
			if(is_prime(i))
				cout<<i
		
	}
	
	return 0;
}

