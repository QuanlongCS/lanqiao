#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n,m;
int k;
string map[1005];


void dfs(int x,int y,int c){
	
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			int nx=x+i;
			int ny=y+j;
			if(nx>=0 && ny>=0 && nx<n && ny<m && c ){
				map[nx][ny]='G';
				dfs(nx,ny,c--);	
			}
			
		}
	}
		
	
	
}
int main(){
	
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>map[i];
	cin>>k;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]=='g')
				dfs(i,j,k);
		}
	}
	
	for(int i=0;i<n;i++)
		cout<<map[i]<<endl;
	
	 
	
	
	return 0;
}


/*
GgGG.
GGGG.
GGgGG
.GGG.
*/

