#include <stdio.h>

typedef struct Student{
	int id;
	char sex;
	
}ST;
int main(){
//	struct Student /*����*/ Stu/*������*/; 
	struct Student st;
	struct Student* pst=&st;
	pst->id=101;
	printf("%d\n",pst->id);
	
	ST st2;
	ST* pst2=&st2;
	pst2->id=202;
	printf("%d\n",pst2->id);
	
		
	return 0;
}

