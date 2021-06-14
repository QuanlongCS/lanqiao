#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n,m;
float d;
int map[105][105];
int mins;

void dfs(int x,int y,int index){
	if(x==n && y==m){
		if(index<mins)
			mins=index;
	}
	
	if(x>n || y>m || x<1 || y<1)
		return ;
	
	dfs(x,y+d,index++);
	dfs(x+d,y,index++);
	
	
	return ;
}
int main(){
	cin>>n>>m;
	cin>>d;
	
	dfs(1,1,0);
	
	cout<<mins;
		 
	
	
	return 0;
}

