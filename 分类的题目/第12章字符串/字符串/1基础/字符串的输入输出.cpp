/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string> 
using namespace std;

int main(){
	char ch[1005];
	int n;
	
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		gets(ch);
		puts(ch);
		printf("\n");
	}
	
	while(scanf("%s",ch)!=EOF){
		printf("%s\n",ch);
		printf("\n");
	} 
	
	
	return 0;
}

