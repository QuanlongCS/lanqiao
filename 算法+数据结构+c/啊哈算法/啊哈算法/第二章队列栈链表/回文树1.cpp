#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
using namespace std;
char str[105];
int main(){
	scanf("%s",str);
	
	int len=strlen(str);
	
	int mid=len/2;
	int ans=1;
	for(int i=0;i<mid;i++){
		if(str[i]!=str[len-i-1]){
			ans=0; 
		}	
	}
	if(ans)
		cout<<"yes";
	else cout<<"no";
	
	return 0;
}

