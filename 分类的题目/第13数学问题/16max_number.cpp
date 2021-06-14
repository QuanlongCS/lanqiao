#include <stdio.h>
int main()
{
    int max = 0,input;
    
    scanf("%d",&input);
    
	while(input != -1)
    {
        if(input > max)
            max = input;
        scanf("%d",&input);
    }
    printf("%d\n",max);
    return 0;
}
