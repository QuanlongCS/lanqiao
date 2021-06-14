#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int a[1000005];
int f_check(int n){
	
	int i=0;
	while(n){
		a[i++]=n%10;
		
		n/=10;
	}	
	
	for(int j=0;j<=i;j++){
		if(a[j]<a[j+1])
			return 0;
	}
	
	return 1;
	
}
int main(){
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(f_check(i))
			cnt++;
	}
	
	cout<<cnt<<endl;
	
	return 0;
}

