#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int a[1005]; 

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i< n; i ++)
		cin >> a[i];
	int cnt=0;
	
	for(int i=1;i<n-1;i++){
		
		int l=0,f=0;
		
		for(int j=i-1;j>=0;j--){
			if(a[j]<a[i]){
				l=1;
				break;
			
			}
		}
		
		for(int k=i+1;k<n;k++){
			if(a[k]>a[i]){

				f=1;
				break;
			}
				
		}
		
		if(l&&f){
			cnt++;
		}
		
	}
	cout<<cnt;
	
	return 0;
}


