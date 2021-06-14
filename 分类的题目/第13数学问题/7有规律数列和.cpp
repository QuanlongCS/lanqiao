/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    double sum=0.0;
    double a=2,b=1,t=0.0;
    for(int i=1;i<=n;i++){
        sum+=a/b;
        
        t=a; 
        a=a+b;
        b=t;
    }

    printf("%.2f",sum);
    return 0;
}
