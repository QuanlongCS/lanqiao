/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring> 
using namespace std;
string str; 
string ans; 

int main(){
	getline(cin,str);	
	char order;	//D I R
	cin>>order;
	
	if(order=='D'){
		char a;
		cin>>a;
		int i;
		for(i=0;i<str.length();i++){
			if(str[i]==a){
				i++;
				break;
			}else{
				ans+=str[i];
			}
		}
		for(;i<str.length();i++)
			ans+=str[i];
	
	}
	
	
	if(order=='I'){
		char a1,a2; 
		cin>>a1>>a2;
		int i;
		for(i=str.length()-1;i>=0;i--){
			ans=str[i]+ans;
			if(str[i]==a1){
				ans=a2+ans;
				i--;
				break;
			}
				
		}
		
		for(;i>=0;i--)
			ans=str[i]+ans;
		
	}
	
	
	if(order=='R'){
		char a1,a2;
		cin>>a1>>a2;
		
		for(int i=0;i<str.length();i++){
			if(str[i]==a1)
				str[i]=a2;
			ans+=str[i];
		}
		
		
	}
	
	//
	cout<<ans;
	
	
	return 0;
}

