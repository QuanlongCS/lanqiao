/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int a[100];

int S(int n){
	
	int t=2;
	int sum=2;
	
	for(int i=2;i<=n;i++){//5
		t*=10;
		t+=2;//
		sum+=t;
			
	}
	
	return sum;
}

int main(){
	int n;
	cin>>n;
	cout<<S(n);
	
	return 0;
}

