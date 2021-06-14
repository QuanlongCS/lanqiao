#include <cstdio>
#include <cstring> 
char s1[1005],s2[1005];

int main(){
	gets(s1);
	gets(s2);
	int len1=strlen(s1);
	int len2=strlen(s2);
	int ans=0;
	//ABCDE
	//DE
//	1 0
//	2 0
//	3 0
//	4 i=4;j=0 1
//		s1[i+j]=4+0,4+1
//		s2[j]=01
	for(int i=0;i<len1;i++){
		bool p=true;
		for(int j=0;j<len2;j++){
			if(s1[i+j] != s2[j])
				p=false;
				break;
		}
		if(p)
			++ans;
	}
	
	printf("%d",ans);




	return 0;
}

