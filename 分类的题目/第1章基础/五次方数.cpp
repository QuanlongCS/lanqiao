#include <iostream>
using namespace std;
int n;
 
int f(int x){
	return x*x*x*x*x;
}
 
int main()
{
	
	for(int i=2;i<=900000;i++){
		int sum=0,t=i;
		while(t){
			sum+=f(t%10);
			t/=10;
		}
		if(sum==i)
		cout<<i<<endl;
	}
	return 0;
}
