#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isyuan(char c){
	if(c=='a' ||c=='e'||c=='i'||c=='o'||c=='u')
		return true;
	
	return false;
}

int f(string &str){
	int i=1;
	if(!isyuan(str[0])){
		
		while(str[i]){
			if(isyuan(str[i])){
				while(str[i]){
					if(!isyuan(str[i])){
						while(str[i]){
							if(isyuan(str[i]))
								return 1;
						i++;
						}
						
					}
				
				i++;
				}
				
			}
			
		
		i++;
		}
	    
	    
	    
	}
	
	return 0;
}
int main(){
	string str1;
	cin>>str1;
	

	if(f(str1)){
		cout<<"yes";
		
	}else
		cout<<"no";
	

	return 0;
}

