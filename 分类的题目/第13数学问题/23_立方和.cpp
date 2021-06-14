/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i=2;
	int s=1;
	while(s<n ){
		++i;
		
		s+=i*i*i;
	} 
	
	cout<<i;
	
	return 0;
}

