/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int f(int n){
	if(n==1)
		return 10;
	if(n>1)
		return f(n-1)+2;
	
}
int main(){
	
	int x;
	cin>>x;
	
	cout<<f(x);
	 
	return 0;
}

