#include <cstdio>
#include <iostream>
#include <algorithm>//Ê×Î²µØÖ· 
using namespace std;
int main(){
int arr[5]={3,2,7,5,1};
great<int>();
//	sort(arr,arr+5,greater<int>());75321
	sort(arr,arr+5);//12357	
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	} 





	return 0;
}

