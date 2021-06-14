/*
1 2 3 4 5 6 7
按照编号升序围成一个圈
 
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <queue> 
using namespace std;

int main(){
	int n=7,m=5;
//	cin>>n>>m;
	queue<int> q;
	
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	int cur=1;
	while(q.size()>1){
		int temp=q.front();// 1  
		q.pop(); 
		
		if(cur==5){ 
			cur=1;
		}else{
			q.push(temp);//6 7 1 2 3 4
			cur++;
		}
	}
	
	cout<<q.front();
	return 0;
}

