#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int num[50];

int solve(){
	int i=0;int temp;
	while(num[i]==0){
		++i;
	}
	printf("%d",num[i]);
	
	for(int j=0;j<50;j++){
		if(j==i)continue;
		if(j>i && num[j]==0)return 0;
		printf("%d",num[j]);
		
	}
	
	
	
	return 0;

}
	
	

int main(){
	int cnt=0;
	int x=0;
	for(int i=0;i<10;i++){
		cin>>cnt;//2	
		for(int j=0;j<cnt;j++)
			num[x++]=i;	
	}
		

//cin		2 2 0 0 0 3 0 0 1 0
//			0 1 2 3 4 5 6 7 8 9
	solve();
	

	return 0;
}

