#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n,m;
int map[1005][1005];
int h;

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
			
		}
	} 
	
	cin>>h;
	
	int sum=0;
	for(int k=0;k<h;k++){
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(map[i][j]){
					sum++;	
					--map[i][j];
				}
				
			}
		} 
		
		cout<<sum<<endl;
	}
	
	return 0;
}

