#include <stdio.h>
struct Student{
	int id;
	int age;
}; 
void f(struct Student *pst){
	pst->id=111;
	pst->age=20;
}
int main(){
	struct Student st;//1
	f(&st);
	printf("%d %d",st.age,st.id);
	return 0;
}

