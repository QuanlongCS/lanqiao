#include <cstdio>
int a[1005]={1};
int main(){
	int n,k;
	scanf("%d%d",&n,&k);

	for(int i=1;i<=k;i++){//k���� 
		for(int j=1;j<=n;j++){//nյ�� 
			if(j%i==0)// ��mod k��4%2==0�� 
				a[j]=!a[j];	//ȡ��1����1==0����0==1�� 
		}	
		
	}
	for(int i=1;i<=n;i++){
		if(a[i])
			printf("%d ",i);
	}
	
	return 0;
}
