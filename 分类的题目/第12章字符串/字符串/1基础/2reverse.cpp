/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string> 
using namespace std;

int main(){
	string str;
	cin>>str;
	
	int size=str.length(); 
	for(int i=size-1;i>=0;i--){
		cout<<str[i];
	}
	
	
	return 0;
}

