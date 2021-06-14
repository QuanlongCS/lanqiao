/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;


bool check(int n){
    int a=n/100;
    int b=n%100/10;
    int c=n%10;
    
	int t=a*a*a+b*b*b+c*c*c;
	
	if(t==n)	
		return true;
	else 
		return false;
    
        
}

int main(){
	//153 370 371 407
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		int f=0;
		for(int i=a;i<=b;i++){
			
			if(i==153 || i==370 || i==371  || i==407){
				f=1;
				cout<<i<<" ";
			}
			
			
		}
		if(f==0)
			cout<<"no"<<endl;
	}
    
	
	return 0;
}

