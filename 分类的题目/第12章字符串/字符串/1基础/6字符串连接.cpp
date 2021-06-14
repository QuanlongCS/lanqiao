/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char ch[55];
	gets(ch);
	int l=strlen(ch);
	
	for(int i=0;i<l;i++){
		cout<<ch[i];
	}
	for(int i=l-1;i>=0;i--){
		cout<<ch[i];
	}
	 
	
	return 0;
}

