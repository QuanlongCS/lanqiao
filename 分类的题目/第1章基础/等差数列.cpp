/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int temp=2;
	int sum=2;
	for(int i=2;i<=n;i++){
		
		sum+=temp+3; 
		temp=temp+3;
	}	
	cout<<sum;
	return 0;
}

