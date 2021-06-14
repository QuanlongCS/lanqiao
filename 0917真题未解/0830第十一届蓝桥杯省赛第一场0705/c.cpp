/*
3880
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	double power=10000;
	
	double time=0;
	//10000 0
	//
	cout<<time<<" "<<power<<endl;
	
	while(power>=0){
		power-=600;++time;
		cout<<time<<" "<<power<<endl;
		
		power+=300;++time;
		cout<<time<<" "<<power<<endl;
	}
	cout<<"-----------------"<<endl;
	//64 400
	//600/60 每秒10power
	//400个power需要40s
	cout<<64*60+40; 
	return 0;
}

