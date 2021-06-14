//���� 
/*��ÿ����@�����ӳ������ݹ��������Χ�ġ�@�����ӡ�ÿ�η���һ������ʱ�͸���д
��һ������ͨ������š�������������е�idx���飩�������Ϳ����ڷ���֮ǰ������Ƿ��Ѿ�
���˱�ţ��Ӷ�����ͬһ�����ӷ��ʶ�Σ�
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

