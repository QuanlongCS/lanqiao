
#include <iostream>
#include <cstdio>
#include <string>
using namespace std; 

    char s[105];

int main(){

    int cnt=0;
    cin>>s; 
    for(int i=0;s[i];i++){
        if(s[i]>='a' && s[i]<='z' || s[i] >= 'A' && s[i] <='Z')
            cnt++;
    }
    cout<<cnt;
    return 0;
}
