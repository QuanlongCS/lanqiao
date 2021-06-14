/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++) {
		int t;
		cin>>t;
		if(t%2==0)
			sum+=t;
	}
	
	cout<<sum;
	return 0;
}

