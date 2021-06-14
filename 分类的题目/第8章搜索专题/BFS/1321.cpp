/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int n,k;

char a[10][10];
int visited[10];
int cnt=0;
int way=0;

void dfs(int h){
	if(way==k){
		cnt++;
		return ;
	}
	if(h>=n)
		return ;
	for(int i=0;i<n;i++){
		if(!visited[i] && a[h][i]=='#'){
			visited[i]=1;
			way++;
			dfs(h+1);
			visited[i]=0;
			way--;
		}
			
		
	}
	dfs(h+1);
}
 

int main(){
	while(cin>>n>>k){
		if(n==-1&&k==-1)
			break;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];// ‰»ÎÕº 
			}
		}
		dfs(0); 
		cout<<cnt<<endl;
		memset(visited,0,sizeof(visited));
		cnt=0;
		way=0;
	}
	
	
	return 0;
}

