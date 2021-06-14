#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	char str[7];
	scanf("%s",str);
	int n=strlen(str);
//	cout<<n;
	do{
		for(int i=0;i<n;i++){
			printf("%c",str[i]);
		}
		
		printf("\n");
	} while(next_permutation(str,str+n));

	return 0;
}

