#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;
int n;
int a[10005];

int main(){
	
	cin>>n;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	int max=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int ans =abs(i-j) + abs(a[i]-a[j]);
			if( ans > max)
				max=ans;
			
			
		}
	}
	
	cout<<max;
	
	
	return 0;
}

