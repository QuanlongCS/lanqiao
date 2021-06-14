#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define Maxlen 40
struct book{
	char title[Maxlen];
	char writer[Maxlen];
	float value;
}lib={"c primer plus","unknown",99};//Ä£°å½áÊø
 
int main(){
	//struct book lib;
	//in
	printf("book title\n");
//	scanf("%s",&lib.title);
	
	printf("writer name\n");
//	scanf("%s",&lib.writer);
	
	printf("the value\n");
	//scanf("%f",&lib.value);
	
	//out
	printf("%s by %s :$ %f\n",lib.title,lib.writer,lib.value);
	
		 

	return 0;
}

