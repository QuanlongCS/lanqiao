/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	double ans=100;
	
	
	double dis=100;
	for(int i=1;i<n;i++){
		dis=dis/2.0;
		ans+=dis*2;
	}
	
	printf("%.4f",ans); 
	return 0;
	
}

