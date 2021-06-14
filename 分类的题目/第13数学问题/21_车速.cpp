#include <stdio.h>
#include <math.h>
int main()
{
    int    A[5];
    int    B = 95860, B1, i;
 
    while ( 1 )
    {
        B++;
        B1 = B;
 
        i = 0;
        while ( i != 5 )
        {
            A[i]    = B1 % 10;
            B1    /= 10;
            ++i;
        }
 
        if ( A[0] == A[4] && A[1] == A[3] )
        {
            printf( "%d", B );
            break;
        }
    }
    return(0);
}
