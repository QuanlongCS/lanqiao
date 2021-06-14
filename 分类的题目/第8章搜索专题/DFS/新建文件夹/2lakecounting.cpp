/*
10 12
W........WW.
.WWW.....WWW
....WW...WW.
........WWW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.

3
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int n,m;
char map[105][105];

void dfs(int x,int y){
	//�滻������λ�� 
	map[x][y]='.';
	
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			//ѭ�������ƶ����� 
			int nx=x+i;
			int ny=y+j;
			
			//�Ƿ��ڱ߽��� �� �������� 
			if(nx>=0 && nx<n && ny>=0 && ny<m && map[nx][ny]=='W' )
				dfs(nx,ny);
		}
	}

	return ;
}

int main(){
	//1����"��ģ" �� "ͼ"
	cin>>n>>m;
	for(int i=0;i<n;i++)
		scanf("%s",map[i]);
	
	//�ҵ�ĳһ����ͨ����Ϊ��ʼ��	
	int res=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]=='W'){
				res++;//�ҵ�һ����1 
				dfs(i,j);//�Ѹ����Ŀ鹲ͬ��Ϊ1�� 
			}
			
		}
	}
	
	//�����ѵĴ���,������ͨ��ĸ��� 
	cout<<res;
	
	return 0;
}

