/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	//100$ 100s
	for(int i=0;i<20;i++){
		for(int j=0;j<33;j++){
			for(int k=0;k<100;k++){
				
				if(k%3==0 && i+j+k==100 && 5*i+3*j+k/3==100 )
					
					printf("cock=%d,hen=%d,chicken=%d\n",i,j,k);
			}	
		}
	} 
	
	return 0;
}

