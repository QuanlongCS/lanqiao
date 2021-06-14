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
	
	int n,m;
	cin>>n>>m;
	int res=gcd(n,m);
	cout<<res;
	//70044 113148
	//5388
	return 0;
}

