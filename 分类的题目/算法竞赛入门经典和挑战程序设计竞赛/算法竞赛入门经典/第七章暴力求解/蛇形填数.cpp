#include <stdio.h> 
int a[10][10];
int main(){
	int n;
	scanf("%d",&n);
	int x,y;
	int tot=a[x=0][y=n-1]=1;
	
	while(tot<n*n){
		while(x+1<n && a[x+1][y]==0 )
			a[++x][y]=++tot;
		while(y-1>=0&& a[x][y-1]==0 )
			a[x][--y]=++tot;
		while(x-1>=0&& a[x-1][y]==0 )
			a[--x][y]=++tot;
		while(y+1<n && a[x][y+1]==0 )
			a[x][++y]=++tot;
			
	}

	for(x = 0; x < n; x++){
		for(y = 0; y < n; y++)
			printf("%3d", a[x][y]);
			
		printf("\n");
	}

	
	
	return 0;
}
/*
10(0,0) 11(0,1) 12  	    1(0,3)
9  16 13 	    2(1,3)
8(2,0) 15 14    3(2,3)
7(3,0) 6 5(3,2) 4(3,3)
*/
