#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct _INFO{
	int num;
	char str[256];
}; 

int main(){
	struct _INFO A;
	A.num=2014;
	strcpy(A.str,"welcome to cpp");
	printf("%d %s",A.num,A.str);

	return 0;
}
//2014 welcome to cpp

