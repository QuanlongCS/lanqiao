#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}

int isprime(int x){
	for(int i=2;i<=x/i;i++){
		if(x%i==0)
			return 0;
	}
	return 1;
	
}
int main(){
	int n,m;
	//cin>>n>>m;
	
	//cout<<gcd(n,m)<<endl;
	//cout<<lcm(n,m);
	cin>>n;
	if(isprime(n)){
		cout<<"yes";
	}else
		cout<<"no";
	
	return 0;
}

