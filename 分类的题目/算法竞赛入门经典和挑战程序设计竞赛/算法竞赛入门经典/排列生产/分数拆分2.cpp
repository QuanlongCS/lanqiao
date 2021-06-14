#include <stdio.h>
int main()
{
    int k;
    while(~scanf("%d",&k)){
        for(int y=k+1;y<=2*k;y++){
            if(k*y%(y-k)==0){
                int x = k*y/(y-k);
                printf("1/%d = 1/%d + 1/%d\n",k,x,y);
            }
        }
    }
    return 0;
}

