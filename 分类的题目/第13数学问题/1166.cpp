/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	int sum=0;
	for(int i=x;i<=y;i++){
		if(i%3==1 && i%5==3)
			sum+=i;
	}
	cout<<sum;
	return 0;
}

