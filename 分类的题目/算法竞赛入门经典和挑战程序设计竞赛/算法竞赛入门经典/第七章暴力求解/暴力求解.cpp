#include <cstdio>
#include <iostream>
using namespace std;
int temp[9];
//
int Set1(int n){
	int cnt=9;
	while(n){
		temp[cnt--]=n%10;//5 1 4 1 3
			
		n/=10;
	}
	
	
	 
}
int Set2(int n){//31415
	int cnt=4;
	while(n){
		temp[cnt--]=n%10;//5 1 4 1 3
			
		n/=10;
	}
	 
}
int  check(){
	if(temp[0]!=temp[1] && temp[0]!=temp[2] && temp[0]!=temp[3] && temp[0]!=temp[4] && 
		temp[0]!=temp[5] && temp[0]!=temp[6] && temp[0]!=temp[7] && temp[0]!=temp[8] &&
		 temp[0]!=temp[9] && temp[1]!=temp[2] && temp[1]!=temp[3] && temp[1]!=temp[4] && 
		  temp[1]!=temp[5] && temp[1]!=temp[6] && temp[1]!=temp[7] && temp[1]!=temp[8] &&
		   temp[1]!=temp[9] && temp[2]!=temp[3] && temp[2]!=temp[4] && temp[2]!=temp[5] && 
		    temp[2]!=temp[6] && temp[2]!=temp[7] && temp[2]!=temp[8] && temp[2]!=temp[9] &&
		temp[3]!=temp[4] && temp[3]!=temp[5] && temp[3]!=temp[6] && temp[3]!=temp[7] && 
		 temp[3]!=temp[8] && temp[3]!=temp[9] && temp[4]!=temp[5] && temp[4]!=temp[6] && 
		  temp[4]!=temp[7] && temp[4]!=temp[8] && temp[4]!=temp[9] && temp[5]!=temp[6] && 
		   temp[5]!=temp[7] && temp[5]!=temp[8] && temp[5]!=temp[9] && temp[6]!=temp[7] &&
		    temp[6]!=temp[8] && temp[7]!=temp[8] && temp[7]!=temp[9] && temp[8]!=temp[9]
	)
		return 1;
	return 0;	
}

int ans[100];
int main(){
	int n;
	cin>>n;
//	x1/x2=n;
	int cnt=0;
	for(int i=1234;i<99999;i++) {//开始枚举x2 
		//查重x1
		//查重x2
		Set1(i*n); 
		Set2(i);
	
		
		if(check() && (i*n+i)<9999999999 && i*n<99999){
			ans[cnt++]=i;

		} 
		
	}
	for(int i=0;i<cnt;i++){
		if(ans[i]<9999){
			printf("%d/0%d = %d\n",ans[i]*n,ans[i],n);	
		}else{
			printf("%d/%d = %d\n",ans[i]*n,ans[i],n);	
		}
	}
		
		
	return 0;
}

