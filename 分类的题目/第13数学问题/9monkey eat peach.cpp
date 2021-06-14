/*
(n+1)*2
*/
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int peachs=1;
    int n=10;//days
    //cin>>n;
    while(n!=1){
        peachs=(peachs+1)*2; 
        n--;
    }

    cout<<peachs;
       



    return 0;
}
