#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define Max 100
struct book{
	char tit[Max];
	char writer[Max];
	float value; 
};
int main(){
	struct book lib[Max];
	int cnt=0;
	int index;
	
	while(cnt<Max && scanf("%s",lib[cnt].tit) != NULL && lib[cnt].tit[0] != '\0'){
		printf("��������\n");
		scanf("%s",lib[cnt].writer);
		
		printf("now ����۸�\n");
		scanf("%f",&lib[cnt++].value);
		while (getchar() !='\n')
			continue;
			if(cnt<Max)
				printf("��һ����Ϣ"); 
	}
	if(cnt>0){
		printf("your list\n");
		for(index=0;index<cnt;index++)
			printf("%s by %s $:%f",lib[index].tit,lib[index].writer,lib[index].value); 
	}else
		printf("no books");

	return 0;
}

