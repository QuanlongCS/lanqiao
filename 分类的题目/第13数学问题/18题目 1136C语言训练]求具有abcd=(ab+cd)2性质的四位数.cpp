/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	
	for(int i=1000;i<=9999;i++){
		int left=i/100;
		int right=i%1000%100;
		int ans=left+right;
		if((ans*ans)==i)
			cout<<i<<" ";
		 
	}
	
	return 0;
}

