#include <cstdio>
#include <iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
/*
gcd(8,12)//(12,8)��һ��
(12,8%12==8)
(8,12%8==4)
(4,8%4==0)
	if(b==0)
		return a;4����12 8�����Լ 
	
*/
}

int main(){
	int n,m;
 	while(scanf("%d%d",&n,&m)!=EOF){
	 	cout<<gcd(n,m)<<"\n";	
	}
	
	return 0;
}

