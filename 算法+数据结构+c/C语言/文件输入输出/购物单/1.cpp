#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	freopen("in.txt","r",stdin);
	double ans=0,a,b;
	char buf[110];
	
	while(scanf("%s%lf%lf",buf,&a,&b)!=EOF){
	//	int i=0;
	//	printf(" %d %lf %lf %lf ",++i,a,b),ans;
		ans=a*(b/100)+ans;
	//	printf(" %d %lf %lf %lf \n",++i,a,b,ans);
	} 	
	printf("%lf\n",ans/2);
	 
	return 0;		
}
	


