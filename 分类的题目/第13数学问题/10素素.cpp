#include <iostream>
#include <cstdio>
using namespace std; 
int isprime(int n){
    for(int i= 2;i<=n/2;i++){   
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;

/*    for (int i = 2; i < n; i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    
    }
  */ 
  //  prime 如果不是输出not prime
   if(isprime(n))
   		cout<<1;
	else
		cout<<0;  
	return 0;
}
