/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int a[6]={1,2,5,10,50,100};

int func(int salary){//121
	int max_=1;//max里保存了最佳的选择  
	int x=0;//存放钞票的张数 
	
	
	while(salary){
		
		for(int i=0;i<6;i++){
			if(a[i]<=salary){
				max_=a[i];

			}		
		}
		int t=0;
		t=salary/max_; 
		salary-=(t*max_);
		x+=t;
	}


	return x;		
}
	
int main(){

	
	int n;
	cin>>n;
	
	while(n!=0){
		int x=0;
		for(int i=0;i<n;i++){	
			int t;
			cin>>t;
			x+=func(t);
		}
		
		cout<<x<<endl;
		
		cin>>n;	
	}	
	
	return 0;
}

