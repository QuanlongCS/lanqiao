#include <cstdio>
#include <iostream>
using namespace std;
//123
int _123(){
		
	for(int a=1;a<=3;a++){
		for(int b=1;b<=3;b++){
			for(int c=1;c<=3;c++){
				if(a!=b && a!=c && b!=c)
					cout<<a<<b<<c<<endl;
			}
		}
		cout<<endl;
	}
}
int a[10],book[10],n;
//  盒子  状态   1~n 
 
void dfs(int step){
	//输入n输出1~n全排列 
	
	if(step==n+1){
		
		for(int i=1;i<=n;i++)
			printf("%d ",a[i]);
		printf("\n");
		
		return ;
	}
	
	for(int i=1;i<=n;i++){
		
		if(book[i]==0){
			a[step]=i;
			book[i]=1;
			
			dfs(step+1);
			book[i]=0;
		}
	
	}
	return ;
}
int main(){

//	_123();
	scanf("%d",&n);//3 
	dfs(1);

	return 0;
}

