/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void GetReal(double *n){

	printf("please input a number:\n");

	cin>>*n;
	
}

void GetString(string *str){
	printf("please input a string:\n");
	
	cin>>*str;
	
	
}
int main(){
	double n;
	string str;
	
	GetReal(&n);
	GetString(&str);
	
	cout<<n<<endl;
	cout<<str<<endl;
	return 0;
}

