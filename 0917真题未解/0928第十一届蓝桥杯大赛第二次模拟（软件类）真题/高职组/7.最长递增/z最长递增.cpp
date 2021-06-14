#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n;
int a[10005];

int main(){
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	
	int cnt=0;
	for(int j=0;j<n;j++){
		if(j+1==n)
			break;
			
		if( a[j]<a[j+1] ){
			cnt++;	
			
		}

	}
	
	cout<<cnt;
	return 0;
}

