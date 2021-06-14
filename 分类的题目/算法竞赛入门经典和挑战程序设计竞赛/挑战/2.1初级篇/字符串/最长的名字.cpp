#include <cstdio>
#include <cstring>
char name[105],ans[105];
int res;
int main(){
	int N;
	int len;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",name);
		
		len=strlen(name);
				
		if(len>res){
			res=len;
			strcpy(ans,name);		
		}
					
	}
	printf("%s",ans);
	





	return 0;
}

