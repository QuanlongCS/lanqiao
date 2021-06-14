#include <cstdio>
#include <algorithm>
using namespace std;
int n;
int arrn[25];

int f(int i){
	int temp=1;
	for(int j=0;j<=i;j++){
		temp*=arrn[j];
	}
	//a[0]~a[i]乘积 
	//2 2,4 2,4,-3 
	//2(max1) 8(max2) -24(max假)
	return temp;
	
}
int main(){
	scanf("%d",&n);//in 数据规模 
	for(int i=0;i<n;i++){
  		scanf("%d",&arrn[i]);
	}//in 数据源 
	  

	  
	int max=-999999; 
	for(int i=0;i<n;i++){	
		if(f(i)>max)
			max=f(i);
	}
	
	if(max>0)printf("%d\n",max);
	if(max<=0)printf("0\n");  

return 0;
}

/*
遍历数组
3
2 4 -3

5
2 5 -1 2 -1 
*/ 
