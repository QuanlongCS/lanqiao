/*


*/

#include <iostream>
#include <cstdio>
#include <string>
using namespace std; 

int main(){
    long long n;
    cin>>n;

    long long mid=n*n;//square
    long long  cube=n*n*n;
    
   
  
	int left=mid,right=mid;
    for(int i=0;i<n/2;i++){
   		left-=2;   
    }
    for(int i=0;i<n/2;i++){
   		right+=2;   
    }
	
	cout<<n<<"*"<<n<<"*"<<n<<"="<<cube<<"=";
	for(int i=left;i<=right;i+=2){
		if(i==right)
			cout<<i;
		else
			cout<<i<<"+";
	}
    
	 
    return 0;
}
