/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;


long long a[2005]; 
long long f(int n){
	if(a[n])
		return a[n];
	if(n<=1){
		a[n]=1;
		return a[n];
	}
		
	a[n]=n * f(n-1);
	return a[n];
} 

int main(){
	int cnt=0;
	for(int i=1;i<100000;i++){
		int s=0,t=i;
		while(t){
			
			s+=f(t);
			
			t/=10;
		}
		if(i==s)
			cnt++;
		
	} 
	 	
	cout<<cnt;
	return 0;
}

