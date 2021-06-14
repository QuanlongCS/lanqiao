#include <cstdio>
#include <iostream>
#include <algorithm> 
#include <cmath> 
#include <string>
using namespace std;
/*
	max
	min
	abs
	fabs浮点数的绝对值
	swap
	reverse(a,b) arr[a,b)
*/ 
int main(){
//	max(a,b)返回最大值 
	int a=3,b=4,c=5;
	max(a,b);
	//如果求三个数的最大值
	max(a,max(b,c));
	int x;
	abs(x);//返回x的绝对值 ,但注意是整数 
	
	float fx;
	fabs(fx);// 浮点用math头文件下的fabs 
	
	int a1=1;int b1=19; 
	swap(a1,b1);
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	
	reverse(arr,arr+4);//

//	for(int i=0;i<10;i++){
//		cout<<arr[i];
//	}

	string str="abcdefghijk";
	reverse(str.begin()+2,str.begin()+6);//[str[2],str[6])
	for(int i=0;i<str.length();i++){
		cout<<str[i];
	}
	return 0;
}

