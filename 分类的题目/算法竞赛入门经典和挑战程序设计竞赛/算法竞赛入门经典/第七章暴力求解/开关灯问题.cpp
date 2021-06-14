#include <cstdio>
int a[1005]={1};
int main(){
	int n,k;
	scanf("%d%d",&n,&k);

	for(int i=1;i<=k;i++){//k个人 
		for(int j=1;j<=n;j++){//n盏灯 
			if(j%i==0)// 灯mod k（4%2==0） 
				a[j]=!a[j];	//取反1，！1==0，！0==1； 
		}	
		
	}
	for(int i=1;i<=n;i++){
		if(a[i])
			printf("%d ",i);
	}
	
	return 0;
}
