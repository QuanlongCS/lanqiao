/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

void f(char str[],int size){
	int count=1;
	
	for(int i=0;i<size;i++){
		if(str[i]==str[i+1])
			count++;
		else{
			if(count>1)
				printf("%d",count);
			
			//General case 
			printf("%c",str[i]);
			count=1;		
		} 
		
			 
	}
}

int main(){
	int n; 
	cin>>n;
	char str[10005];
	
	for(int i=0;i<n;i++){
		scanf("%s",str);
		f(str,strlen(str)); 
		printf("\n");
		
	}
	
		
	return 0;
}

