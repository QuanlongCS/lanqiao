/*
	ABCDEFGHIJKLMNOPQRSTUVWXYZ
	
	1: A
	2: ABA 
	3: 2+C+2 ABACABA
	4: 3D3  ABACABA D ABACABA
	...
	一个数组存储26个字母 
	
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
	char a_z[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string str="A";
	
	int n;
	cin>>n;
	
	for(int i=1;i<n;i++){
		string temp=str;
		
		str+=a_z[i];//A B A
		str+=temp;
	}
	cout<<str;
	
	return 0;
}

