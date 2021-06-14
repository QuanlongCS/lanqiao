#include <iostream>
using namespace std;
int arr[100]; 
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int max=0,temp=0;
	
	
	for(int i=0;i<n;i++){
		temp+=arr[i];
		
		if(max<temp)
			max=temp;
		if(temp<0)
				temp=0;
	}
	cout << max;
	return 0;
}

