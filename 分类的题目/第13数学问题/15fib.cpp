
#include <iostream>
#include <cstdio>
using namespace std; 

int vis[1005];
 
int fib(int n){
    if(vis[n])
    	return n;
	if(n<=1){
		vis[n]=1;
		return vis[n];
	}
    
	vis[n]=vis[n-1]+vis[n-2];
		
    return vis[n];
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cout<<fib(i)<<" ";



    return 0;
}
