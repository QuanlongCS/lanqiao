#include <iostream>
using namespace std;


void swap1(int *a,int *b){
	int temp=*a;
			*a=*b;
			*b=temp;
	return ;
}
void swap2(int& a,int& b){
	int temp=a;
	a=b;
	b=temp;
	return ;
}


int main(){
//	int a,b;
//	while(scanf("%d%d",&a,&b)==2){
//		printf("%d\n",a+b);		
//	}

//	double a,b;
//	while(cin>>a>>b){
//		cout<<min(a,b)<<"\n"; 
//	}
	int a=1,b=10;
	printf("before:%d %d\n",a,b);
//	swap1(&a,&b);
	swap2(a,b);//by reference
	printf("after :%d %d\n",a,b);
	
	return 0;
}

