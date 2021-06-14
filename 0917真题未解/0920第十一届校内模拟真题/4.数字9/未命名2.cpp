#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int check9(int n){

	while(n){
		if(n%10==9)
			return 1; 
		
		n/=10;
	}
	
	return 0;
}
int main(){
	int cnt=0;
	for(int i=1;i<=2019;i++){
		if(check9(i)){
			cnt++;
		
		}
			
	}
	cout<<cnt;
	
	return 0;
}

