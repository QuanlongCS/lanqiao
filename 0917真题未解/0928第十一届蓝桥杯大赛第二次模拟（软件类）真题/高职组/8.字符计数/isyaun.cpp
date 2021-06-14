#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int is_yuan(char c){
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
		return 1;
	return 0;
} 

int main(){
	string s;
	cin>>s;
	int y=0;
	int f=0;
	for(int i =0 ;i < s.length() ; i++){
		if(is_yuan(s[i]))
			y++;
		if(!is_yuan(s[i]))
			f++;
	}
	
	cout<<y<<endl;
	cout<<f;
	
	
	
	return 0;
}

