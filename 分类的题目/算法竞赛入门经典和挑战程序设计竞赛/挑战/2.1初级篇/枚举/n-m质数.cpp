#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
using namespace std;
int isprime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
} 
int main(){
	if(isprime(4))
		cout<<"yes";
	else cout<<"no";
	return 0;
}

