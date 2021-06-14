/*
	4 ¸ö if 
	 
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

int f2(string str1,string str2){
	
	for(int i=0;i<str1.length();i++){
		if(str1[i]!=str2[i])
			return 0;		
	} 
	
	return 1;
} 


int f3(string str1,string str2){
	int flag;
	
	for(int i=0;i<str1.length();i++){
		flag=0; 
		if(str1[i]+32==str2[i] || str1[i]-32==str2[i] || str1[i]==str2[i])
			flag=1;
	
	} 
	
	return flag;
} 

int f4(string str1,string str2){
	
}



int main(){
	string str1;
	string str2;
	cin>>str1;
	cin>>str2;
	
	int str1len=str1.length();
	int str2len=str2.length();
	
	if(str1len != str2len )
		cout<<1;
	else if(str1len == str2len && f2(str1,str2) )
		cout<<2;
	else if(str1len == str2len && f3(str1,str2) )		
		cout<<3;
	else if(str1len == str2len && !f4(str1,str2))	
		cout<<4;
	
	
	 
	
	return 0;
}

