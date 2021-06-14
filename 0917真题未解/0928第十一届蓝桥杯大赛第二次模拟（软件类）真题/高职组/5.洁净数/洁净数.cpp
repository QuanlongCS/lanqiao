#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int is_clean(int n){
	if(n==2)
		return 0;
	while(n){
		if(n%10==2)
			return 0;
		
		n/=10;

	}
	return 1;
}
int main(){
	
	int n;
	int cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(is_clean(i))
			cnt++;
	}

	cout<<cnt;
	
	
	return 0;
}

/*
1 3 4 5 6 7 8 9 10 
11 13 14 15 16 17 18 19 
30
*/
