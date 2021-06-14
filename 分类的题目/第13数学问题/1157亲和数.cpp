/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int f(int x){
	int sx=0;
    for(int i=1;i<=x/2;i++){
    	if(x%i==0)
    		sx+=i;
    }
    
    return sx;
}

int main(){
	
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		if(f(a)==b && f(b)==a)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	} 
	
	return 0;
}

