#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	for(int i=0;i<12;i++){
		printf("%2d months has %2d days.\n",i+1,months[i]);
	}
	printf("__________pointer_______\n");
	for(int i=0;i<12;i++){
		printf("%2d months has %2d days.\n",i+1,*(months+i));
	}
	return 0;
}

