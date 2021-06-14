#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){

	int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;
	head=1;
	tail=10;
	while(head<tail){
		printf("%d ",q[head++]);
		//17589243	5892437	924378  43782	7823	823	32	2 
		//6  		1		5	    9		4		7	8	3  2
		q[tail++]=q[head++];
		
	} 
	return 0;
}

