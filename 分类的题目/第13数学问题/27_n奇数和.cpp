/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int res=0;
	for(int i=1;i<=n;i+=2)
		 if(i%2==1)
		 	res+=i;
	cout<<res;
	
	return 0;
}

