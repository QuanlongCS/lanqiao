//油田 
/*从每个“@”格子出发，递归遍历它周围的“@”格子。每次访问一个格子时就给它写
上一个“连通分量编号”（即下面代码中的idx数组），这样就可以在访问之前检查它是否已经
有了编号，从而避免同一个格子访问多次：
*/
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int m,n;
char map[105][105]; 
void dfs(int x,int y){
	map[x][y]='*';
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			int nx=x+i;int ny=y+j;
			if(nx>=0&&nx<m && ny>=0&&ny<n && map[nx][ny]=='@')
				dfs(nx,ny);
		}
	}
	return ;
}

int main(){
	//in
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>map[i][j]; 
	}
	}
	
	//check
	int ans=0;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		if(map[i][j]=='@'){
			dfs(i,j);
			ans++;
		}
			
	}
	}
	
	printf("%d\n",ans);
return 0;
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

