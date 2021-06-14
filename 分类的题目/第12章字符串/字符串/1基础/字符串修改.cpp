/*
	//输入两个字符串
	//比较相同字符串
	//较长字符串的length - 相同字符串的数量 
	
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char ch1[205];
	char ch2[205];
	gets(ch1);
	gets(ch2);
	int cnt=0;
	
	for(int i=0;i<strlen(ch2);i++){// 
		for(int j=0;j<strlen(ch1);j++){
			if(ch2[i]==ch1[j])
			cnt++;
		}
	}	
	
	cout<<strlen(ch1)-cnt;
	return 0;
}

