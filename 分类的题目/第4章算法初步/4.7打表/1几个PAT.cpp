#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
const int MOD=1000000007; 
const int MAXN=100010;

char str[MAXN];//´æ´¢ÊäÈë×Ö·û 
int leftNumP[MAXN];
int main(){
	scanf("%s",str);
	int len=strlen(str);
	
	for(int i=0;i<len;i++){//±éÀú×Ö·û´® 
		if(i>0){
			leftNumP[i]=leftNumP[i-1];
		}
		if(str[i]=='P'){
			leftNumP[i]++;
		} 
	}
	
	int ans=0,rightNumT=0;
	for(int i=len-1;i>=0;i--){
		if(str[i]=='T'){
			rightNumT++;
		}else if(str[i]=='A'){
			ans=(ans + leftNumP[i]*rightNumT) % MOD;
		}
	}
	printf("%d\n",ans);
	
	return 0;
}
//https://pintia.cn/problem-sets/994805260223102976/problems/994805282389999616 
