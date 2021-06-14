#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int num[4];
int check(int n){
	int cnt=3;
	while(n){
		num[cnt--]=n%10; 
		n/=10;
	}//把数字全部正序放进数组里
	if(num[0]==num[1] && num[0]==num[2] && num[0]==num[3] && num[1]==num[2] && num[1]==num[3] && num[2]==num[3])	
		return 0;//4位数全部相同		 	
	
	return 1;//4位数并不全部相同 		
} 

int calcul1(int arr[]){//降序 
	sort(arr,arr+4,greater<int>());
	return arr[0]*1000+arr[1]*100+arr[2]*10+arr[3];
}
int calcul2(int arr[]){//升序 
	sort(arr,arr+4);
	return arr[0]*1000+arr[1]*100+arr[2]*10+arr[3];
}

void print1(int arr[4]){
	sort(arr,arr+4,greater<int>());
	for(int i=0;i<4;i++)
		printf("%d",arr[i]);
	return ;
}
void print2(int arr[4]){
	sort(arr,arr+4);
	for(int i=0;i<4;i++)
		printf("%d",arr[i]);
	return ;
}


	
int main(){
	int n; 
	cin>>n;
	 
	if(check(n)){
		int x,y,z=0;
		int i=0;
		while(z!=6174 || !z){
			x=calcul1(num);
			y=calcul2(num);
			z=x-y;
			
			print1(num);
			printf(" - ");
			print2(num);
			printf(" = %d\n",z);
			check(z);
			
		}
		
	}
	else 
		printf("%d - %d = 0000\n",n,n);
		
		
		
		 

	return 0;
}

