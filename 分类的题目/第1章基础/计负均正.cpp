/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int cnt=0,ctn=0;
	double avg;
	for(int i=0;i<20;i++){
		int temp;
		cin>>temp;
		if(temp<0)
			cnt++;
		if(temp>0){
			avg+=temp; 
			ctn++;
		}
			
	}	
	
	printf("%d\n%.2lf",cnt,avg/ctn);
	return 0;
}

