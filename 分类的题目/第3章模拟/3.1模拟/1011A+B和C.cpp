#include <cstdio>
#include <iostream>
using namespace std;
 
int main(){
	int T;
	cin>>T;
	long long a,b,c;
	
	for(int i=1;i<=T;i++){
		scanf("%lld%lld%lld",&a,&b,&c);
		
		if(a+b>c)
			printf("Case #%d: true\n",i);
		else 
			printf("Case #%d: false\n",i);	 
		
		
	}
		
		
	

	return 0;
}

