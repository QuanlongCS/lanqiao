#include <cstdio>
#include <iostream>
using namespace std;

int fact(int n){
	if(n==0)return 1;//0! = 1 
	return n * fact(n-1);
	
} 
int mem[1005];
int fib(int n){//10
	
	if(n<=1)return n;
	
	if(mem[n]!=0)return mem[n];
	return mem[n]=fib(n-1)+fib(n-2);

}
int main(){
	
	cout<<fib(10);
	return 0;
}

