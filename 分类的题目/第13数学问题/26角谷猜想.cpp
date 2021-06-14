/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	while(n!=1){
		if(n%2==0){
			printf("%d/2=%d\n",n,n/2);
			n/=2;
		}
			
		else if(n%2==1){
			printf("%d*3+1=%d\n",n,n*3+1);
			n=(n*3+1);
		}
				
		
	}	
	
	return 0;
}

