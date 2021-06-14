#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
#include <cmath>
using namespace std;
int n;
int main(){
	cin>>n;
	for(int a=0;a*a<=n;a++){
		for(int b=0;b*b<=n;b++){
			for(int c=0;c*c<=n;c++){
				for(int d=0;d<=n;d++){
					
				
					if(a*a+b*b+c*c+d*d==n){
						printf("%d^2 + %d^2 + %d^2 + %d^2 = %d \n",a,b,c,d,n);
						return 0;	
					}
				}
			
			}
			
		}
	}
	return 0;
}

