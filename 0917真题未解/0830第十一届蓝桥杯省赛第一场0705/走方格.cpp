#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n,m;
int res;


void dfs(int x,int y){
	
	if(x%2==0 && y%2==0)
		return ;
	//÷’µ„≈–∂œ 	
	if(x<1 || y<1 || x>n || y>m)
		return ;
		
	if(x==n && y==m){
		res++;
		return ;
	}	
	
	dfs(x,y+1);
	dfs(x+1,y);
}

int main(){
	cin>>n>>m;
	if(n%2==0 && m%2==0)
		cout<<0;
	else{
		dfs(1,1);
		cout<<res;
		return 0;
	}
}

