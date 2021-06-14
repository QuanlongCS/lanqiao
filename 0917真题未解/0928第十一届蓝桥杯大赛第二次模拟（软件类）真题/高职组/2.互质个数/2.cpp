#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a,int b){

	if(a%b==0)
		return b;
		
		
	
	return gcd(b,a%b);
	
} 
int main(){
	
	int n=19000;
	int cnt=0;
	for (int i=1;i<n;i++){
		if(gcd(i,n)==1)
			cnt++;
	}
	
	cout<<cnt;
	
	return 0;
}

