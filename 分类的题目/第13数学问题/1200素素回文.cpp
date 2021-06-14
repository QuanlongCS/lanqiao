/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool is_prime(int n){
	for(int i=2;i<=n/2;i++)
		if(n%i==0)
			return false;
			
	return true;
} 

bool is_palindrome(int n){
	int s[100000];
	int cnt=0;
	while(n){
		s[cnt++]=n%10;
		
		n/=10;
	}
	int l=0,r=cnt-1;
	while(l<r){
		if(s[l++]!=s[r--])
			return false;

	}
	
	return true;
}

int main(){// 100 000 000
	long long a,b;
	cin>>a>>b;
	
	for(int i=a;i<=b;i++){
		if(is_prime(i) && is_palindrome(i))
			cout<<i<<endl;
	}
	
	
		
	return 0;
}

