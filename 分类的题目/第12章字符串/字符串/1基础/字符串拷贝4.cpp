/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	char a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	for(int i=m-1;i<n;i++){
		cout<<a[i];
		
	}
		
	
	return 0;
}

