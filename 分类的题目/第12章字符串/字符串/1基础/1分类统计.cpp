/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector> 
using namespace std;

int main(){
	int A=0,N=0,S=0,O=0;//Abc num space others
	char c; 
	while((c=getchar()) != '\n'){
		if(c>='a' && c<='z' || c>='A' && c<='Z')	
			A++;
		else if(c>='0' && c<='9')
			N++;
		else if(c==' ')
			S++;
		else 
			O++;
	}
	
	cout<<A<<" "<<N<<" "<<S<<" "<<O<<endl;
	return 0;
}

