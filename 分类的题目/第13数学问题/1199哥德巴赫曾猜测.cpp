/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int prm[3000];
int cnt=0;

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
	
	for(int i=2;i<n;i++){
		if(isprime(i))
			prm[cnt++]=i;
	}

	int res=1;
	for(int i=0;i<=cnt+1;i++){
		for(int j=0;j<=cnt+1;j++){
			if(prm[i]+prm[j]==n)
				res++;
		}
	}
	
	cout<<res/2;
	
	return 0;
}

