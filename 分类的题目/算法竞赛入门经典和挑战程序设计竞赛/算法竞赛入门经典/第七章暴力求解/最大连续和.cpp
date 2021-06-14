#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n;//长度为n
	scanf("%d",&n);
	int arr[n];//A序列 
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	 
	
	int best =arr[1];//最值 
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int sum=0;
			for(int k=i;k<=j;k++)
				sum+=arr[k];
			
			if(sum>best)
				best=sum;
		}
	} 
	printf("%d\n",best);

return 0;
}
//1 -5 8 3 -4 15 -8
