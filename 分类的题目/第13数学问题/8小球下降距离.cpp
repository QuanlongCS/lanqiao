#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    double m,n;
    cin>>m>>n;

    double distance,bounce;
    
    for(int i=1;i<=n;i++){
    	m/=2.0;
    	bounce = m;
        distance += bounce;
        
    }
    //31.25
	//968.75
	printf("%.2f ",bounce);
	printf("%.2f",distance*3.0-bounce);
   

    return 0;
}
