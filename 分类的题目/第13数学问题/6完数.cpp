/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;



int f(int n){
    
    int sum=0;
    
    for(int i=1;i<=n/2;i++){// 6 3
        if(n%i==0)
            sum+=i;       
    }
	if(sum==n)
		return 1;
	else
		return 0;
	   
}
int main(){
    int n;
    cin>>n;

   
        if(f(n))      
            cout<<"yes"; 
        else
        	cout<<"no";
		
     




    return 0;
}
