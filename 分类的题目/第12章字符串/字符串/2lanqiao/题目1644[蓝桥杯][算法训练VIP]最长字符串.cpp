/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[5][105];
	int flag;
	int max=-1;
	
	for(int i=0;i<5;i++){
		scanf("%s",str[i]);
		int len=strlen(str[i]);
		if( len > max){
			max=len;
			flag=i;
		}
			
	}
	
	cout<<str[flag];
	
	
	return 0;
}

