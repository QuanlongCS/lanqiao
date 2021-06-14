#include <cstdio>
#include <iostream>
using namespace std;
int a[10]; 

int sing[10];
int doub[10];


void select_sort(int cnt1,int cnt2){
	for(int i=0;i<cnt1;i++){
		int max=i;
		for(int j=i+1;j<cnt1;j++){
			if(sing[max]<sing[j])
				max=j;
		}
		int temp=sing[max];
		sing[max]=sing[i];
		sing[i]=temp;
		
	}
	
	for(int i=0;i<cnt2;i++){
		int min=i;
		for(int j=i+1;j<cnt2;j++){
			if(doub[min]>doub[j])
				min=j;
		}
		int temp=doub[min];
		doub[min]=doub[i];
		doub[i]=temp;
		
	}
	//sorted 
	int i=0;
	for(int i=0;i<cnt1;i++){
		a[i]=sing[i];
	}
		
	for(int i=0;cnt1<10;i++,cnt1++){
		a[cnt1]=doub[i];
	}
		

	
	return ;	
}
int main(){
	int temp;
	int cnt1=0,cnt2=0;
	for(int i=0;i<10;i++){
		cin>>temp;
		
		if(temp%2==1)
			sing[cnt1++]=temp;
		if(temp%2==0||temp==0)
			doub[cnt2++]=temp;
	
	}
		
	select_sort(cnt1,cnt2);
	
	
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
		

	

	

	return 0;
}

