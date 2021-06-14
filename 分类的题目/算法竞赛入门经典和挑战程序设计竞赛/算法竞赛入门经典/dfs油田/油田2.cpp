#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
char map[1005][1005]; 

void dfs(int x,int y){
	map[x][y]='*';
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			int nx=x+i;int my=y+j;
			if(nx>=0&&my>=0 && nx<n&&my<m && map[nx][my]=='@')
				dfs(nx,my);
		}
	}

/*

5 5
@*@**
@**@*
*@***
*@**@
@**@@

ans=3	
*/			
	

	return ;
}

int main(){
	cin>>n>>m;//输入大小规模 

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];//输入图 
		}
	}	
	
	int ans=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			//遍历每个位置
			if(map[i][j]=='@'){
				dfs(i,j);
				ans++; 
			}
				
		}
	}

	cout<<ans<<endl;
	return 0;
}

