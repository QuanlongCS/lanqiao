/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string> 
using namespace std;
	string str,ans; 
	
bool check(int p1){
	
	
	return (str[i]=='-') && ((str[i-1]>=0 && str[i-1]<10 && str[i+1]>=0 && str[i+1]<10) 
	|| (str[i-1]>='a' && str[i-1]<='z' && str[i+1]>='a' && str[i+1]<='z')) &&
	 (str[i-1]<str[i+1]);
			
}	

void solve(int p1,int p2,int p3){
	
	
	
} 
	
int main(){
	//fill_way:		1Сд 2��д 3 '*' 
	//repeat_number:k�ظ��ĸ��� 
	//if_reverse: 	1ԭ�� 2���� 
	int p1,p2,p3;
	cin>>p1>>p2>>p3;
	
	
	cin>>str;
	
	int i;
	for(i=0;i<str.length();i++){
	/*(1)*/
		if(check(i)==flase)
			ans+=str[i-1];
		else{
			solve(i); 
			
		}
				
		
					
		  
			
	}	
	
	return 0;
}

