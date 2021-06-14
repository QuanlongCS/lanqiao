#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int cnt[1005];
int judge(int x){
	int k=0;int ans=0;
	while(x){
		cnt[k]=x%10;//4 1 3
		ans+=cnt[k++];
		x/=10;
	}
	for(int i=0;i<k;i++){
		if(cnt[i]!=cnt[k-i-1])
			return 0;
	}

	if(ans!=n)
		return 0;
	 
	return 1;		
}
int main(){
	cin>>n;
	int f=0;
	for(int i=10000;i<=999999;i++){
		if(judge(i)){
			cout<<i<<endl;
			f=1;
		}
	}
	if(!f){
		cout<<-1<<endl;
	}
	return 0;
}
/*
48
699996
789987
798897
879978
888888
897798
969969
978879
987789
996699

*/
