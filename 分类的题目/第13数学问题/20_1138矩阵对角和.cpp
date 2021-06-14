/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int a[11][11];
int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	int sum=0;
	int t=n-1;
	for(int i=0;i<n;i++){
		sum+=a[i][t--];
	}
	
	for(int i=0;i<n;i++){
		sum+=a[i][i]; 
	}
	
	
	if(n%2==1)
		cout<<sum-a[n/2][n/2];
	else
		cout<<sum;
	
	
	return 0;
}
/*1
	
	12
	34
	
	123
	456
	789
	
	 1  2  3  4
	 5  6  7  8
	 9 10 11 12
	13 14 15 16 
	
	*/
