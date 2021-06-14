/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	double t=0.0;
	for(int i=2;i<=n;i++){
		t-=-1.0/double(i*i);
	}
	 
	printf("%.6lf",1.0-t);
	return 0;
}

