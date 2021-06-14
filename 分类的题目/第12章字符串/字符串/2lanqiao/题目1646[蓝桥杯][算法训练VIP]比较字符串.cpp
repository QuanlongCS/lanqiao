/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	string str1; 
	string str2;
	cin>>str1>>str2;
	
	if(str1==str2){
		cout<<0;
	}else 
		//+
		for(int i=0;i<105 && str1[i] && str2[i];i++){
			if(str1[i]!=str2[i]) 
				cout<< str1[i]-str2[i];
			return 0;
		} 
	
	
	
	return 0;
}

