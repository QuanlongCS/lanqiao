/*

*/
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main(){
	double x1,y1,x2,y2;
	while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF){
		
		
		double a=(x1-x2)*(x1-x2);
		double b=(y1-y2)*(y1-y2);
		printf("%.2lf\n",sqrt(a+b)  ); 
	} 
	
	return 0;
}

