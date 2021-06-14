#include <cstdio>
#include <iostream>
using namespace std;
int  factor(int n){
	//1 µ›πÈ±ﬂΩÁ
	if(n==1)return 1;
	
	return factor(n-1)*n;

	//2 µ›πÈ Ω
}
int fib(int n){
	if(n<=1)return 1;
	
	return fib(n-1)+fib(n-2);
}
int main(){
	int n;
	cin>>n;
	//cout<<factor(n);
	cout<<fib(n);
	
	return 0;
}

