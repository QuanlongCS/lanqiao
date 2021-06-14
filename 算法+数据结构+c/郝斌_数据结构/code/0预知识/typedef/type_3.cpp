#include <stdio.h>
typedef struct Student{
	int id;
	char sex;
	
}*PST;//<==> struct Student*
int main(){
	struct Student st;
	PST ps=&st;
	ps->id=101;
	printf("%d",ps->id); 

	return 0;
}

