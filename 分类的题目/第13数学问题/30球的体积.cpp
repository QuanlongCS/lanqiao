/*
v=4/3*¦Ð*r^3;
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	double r;

	while(scanf("%lf",&r)!=EOF){
		double v=4.0/3.0 * 3.1415926 * (r*r*r);
		printf("%.3f\n",v);
	}
	
	 
	
	return 0;
}

