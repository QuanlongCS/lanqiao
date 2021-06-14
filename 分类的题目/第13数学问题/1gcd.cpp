/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int gcd(int a,int b){
	if(a%b==0)
		return b;
		
	return gcd(b,a%b);
}

int lcm(int n,int m){
	return n*m/gcd(n,m);
}
int main(){
	int n,m;
	cin>>n>>m;
	
	cout<<gcd(n,m)<<" "; 
	
	cout<<lcm(n,m);
	return 0;
}

