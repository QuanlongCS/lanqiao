/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
double res;

void fa(int a){
	for(int i=1;i<=a;i++)
		res+=i;
	return ;	
}

void fb(int b){
	for(int i=1;i<=b;i++)
		res+=i*i;
	return ;
}

void fc(int c){
	for(int i=1;i<=c;i++){
		res+=double(1)/double(i);
	}
	return ;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	fa(a);
	fb(b);
	fc(c);
	printf("%.2f",res);
		
	
	return 0;
}

