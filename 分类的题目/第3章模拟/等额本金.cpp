/*
1312.50
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int money=30000;
	int month=24;
	//1250 is basis money 
	double rate=0.005;// 5/1000
	int cnt=0;
	
		while(cnt++!=17){
		 	cout<<cnt<<" ";
			printf("%.2lf\n",1250+(money*rate));
			money-=1250;
		}
		
	
	return 0;
}

