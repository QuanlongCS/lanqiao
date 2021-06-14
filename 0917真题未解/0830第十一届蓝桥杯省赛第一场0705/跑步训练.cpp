#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int power=10000;
	int cnt=0;
	while(power>0){
		cout<<++cnt<<endl;
		power-=600;
		cout<<"running: "<<power<<endl;
			cout<<++cnt<<endl;
		power+=300;
		cout<<"rest: "<<power<<endl;
		
		cout<<endl;
	} 
	
	
	return 0;
}

