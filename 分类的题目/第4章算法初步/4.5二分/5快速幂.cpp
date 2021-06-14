#include <cstdio>
#include <iostream>
using namespace std;
typedef long long LL;
// a^b % m
LL binaryPow(LL a,LL b,LL m){
	if(b==0)return 0;
	if(b%2==1)return a*binaryPow(a,b-1,m) % m;
	else{
		LL mul=binaryPow(a,b/2,m);
		return mul*mul%m;
	}
} 
int main(){
	LL a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
//	cin>>a>>b>>c;
//	cout<<
	printf("%lld",binaryPow(a,b,c));
	return 0;
}

