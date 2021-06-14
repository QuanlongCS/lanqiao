#include <cstdio>
#include <iostream>
#include <string> 
//
using namespace std;
//
int main(){
	//string str="leoqlone";
//1 index 

	//for(int i=0;i<str.length();i++)
	//cout<<str[i]<<" ";

	//in out 
	string str;
	cin>>str;//Ê¡ÂÔ¿Õ¸ñ 
//	cout<<str; 
	
//2 ::iterator it;	
	string::iterator it;
	for(it=str.begin();it!=str.end();it++)
		printf("%c",*it);
	return 0;
}

