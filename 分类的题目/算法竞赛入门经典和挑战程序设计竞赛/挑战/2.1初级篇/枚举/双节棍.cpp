#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
using namespace std;
int l[105];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>l[i];
	}
	int ans=9999;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(l[i]>=l[j]){
				if(l[i]-l[j]<ans){
				ans=l[i]-l[j];
				}
				
			}else{//l[i]<l[j]
				if(l[j]-l[i]<ans){
					ans=l[j]-l[i];
				}
			}
				
			
			
		}
	} 
	cout<<ans;
	return 0;
}

