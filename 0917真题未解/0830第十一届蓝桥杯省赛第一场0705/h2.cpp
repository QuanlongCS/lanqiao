/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int n,m;
int ans;// res
int vis[35][35];
int dx[]={0,1};
int dy[]={1,0};
void dfs(int x,int y){
	if(x==n && y==m){
		ans++;
		return ;
	}
	
	for(int i=0;i<2;i++){
		int nx=dx[i]+x;
		int ny=dy[i]+y;
		if(nx <=n && ny<=m && nx%2!=0 && ny%2!=0 && 1!=vis[nx][ny]){
			vis[nx][ny]=1;
			dfs(nx,ny);
			vis[nx][ny]=0;
		}
	}
		



	
}
int main(){
	cin>>n>>m;
	if(n%2==0 && m%2==0){
		return 0;
	}
	vis[1][1]=1;
	dfs(1,1);
	cout<<ans;
	
	return 0;
}

