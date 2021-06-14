/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int a[10]; 
int main(){
	for(int i=0;i<10;i++)
		cin>>a[i];
		
	sort(a,a+10,greater<int>());
		
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";	
	
	return 0;
}

