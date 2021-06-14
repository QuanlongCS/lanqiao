#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int map[105][105];
int main(){
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	
	}
	
	for(int i=0;i<m;i++){
		for(int j=n-1;j>=0;j--){
			cout<<map[j][i];
		}
		cout<<endl;
	}
	
	return 0;
}

