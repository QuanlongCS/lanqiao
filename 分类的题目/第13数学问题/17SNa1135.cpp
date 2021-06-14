/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int arr[15]={
1,11,111,
1111,11111,111111,
1111111,11111111,111111111,

};

int main(){
	int a,n;
	cin>>a>>n; 
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i]*a;
	}
	
	cout<<sum;
	return 0;
}

