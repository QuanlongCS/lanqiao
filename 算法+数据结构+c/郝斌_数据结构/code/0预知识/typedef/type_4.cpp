#include <stdio.h>
typedef struct Student{
	int id;
	char sex;
	
}*PST,ST;//<==> struct Student* //struct Student

int main(){
	ST st;// struct Student st;
	PST pst=&st;
	pst->id=101;
	printf("%d",pst->id);
	

	return 0;
}

