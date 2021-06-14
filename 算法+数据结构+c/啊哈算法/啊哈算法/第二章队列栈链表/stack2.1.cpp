#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
using namespace std;
	char a[105];
	char s[105];
int main(){ 
	int len,mid,next,top;
	
	gets(a);
	len=strlen(a);
	mid= (len/2)-1;

	top=0;
	for(int i=0;i<=mid;i++)
		s[++top]=a[i];
	
	if(len%2==0)
		next=mid+1;
	if(len%2!=0)
		next=mid+2;
		
	for(int i=next;i<=len-1;i++){
		if(a[i]!=s[top])
			break;
		top--;
	}	
	
	if(top==0)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
		
	return 0;

}

	//一唯数组 ， 指向栈顶变量top；对top进行操作
	// 

