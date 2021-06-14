#include <stdio.h>
typedef struct Student{
	int id;
	char name;
	
}*PSTU,STU;
int main(){
	
	STU st;
	PSTU pst=&st;
	
	pst->id=110;
	st.name='m';
	
	printf("%d %c",st.id,pst->name);
	
	
	return 0;
}

