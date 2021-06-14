#include <stdio.h>
int main(){
	int a = 0;
	for (int i = 1; i <= 2; i ++)
	{
		a += 4;
		for (int j = 1; j <= 5; j ++)
		{
			for (int k = 1; k <= 6; k ++)
				a += 5;
			a += 7;
		}
		a += 8; 
	}
	a += 9;
	
	printf("%d",a);
	return 0;
} 
