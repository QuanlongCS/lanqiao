#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
using namespace std;
int check(int n){//31
	int a=n/10;//3
	int b=n%10;//1

	return b*10+a;
	
}
int main(){
	int son,fa;
	for(int i=10;i<=99;i++){
		if(i-(check(i))==27)
			cout<<i<<" ";
	} 
	return 0;
}
/*30 41 52 63 74 85 96
--------------------------------
Process exited after 0.1127 seconds with return value 0
请按任意键继续. . .
*/
 
