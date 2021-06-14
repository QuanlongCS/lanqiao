#include <cstdio>
#include <iostream>
using namespace std;
int solve(int n){
	int cnt=0;

	while(n!=1){
		if(n%2==0)
			n/=2;
		else if(n%2==1){
			n=(3*n+1)/2;
		}
		cnt++;
	}
	return cnt;
} 
int main(){
	int n;
	cin>>n;
	cout<<solve(n);
	return 0;
}

