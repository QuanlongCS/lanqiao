#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
 
using namespace std;
//2~n-1 
bool isPrime(int n){
	
	if(n<=1)return false;//����
	 
	int sqr=(int)sqrt(1.0*n);//����n 
	
	for(int i=2;i<=sqr;i++){//���� 
	// longlong i=2; i*i<=n
		if(n%i==0)return false; 
	
	}
	return true;//������ 
}

int prime_list[105];int cnt=0;//���صĸ���
bool hash[105];//true or false
//����������10^5 
void Find_Prime(int n){//1~n֮�������
	for(int i=2;i<n;i++){
		if(isPrime(i)){
			prime_list[cnt++]=i;//�ŵ����ر����� 
			hash[i]=true;//������λ��Ϊ���� 
		}
	}	
	
	return ;
 
}

 
 
int main(){
	Find_Prime(100);
	for(int i=0;i<cnt;i++){
		printf("%d ",prime_list[i]);
	}

	return 0;
}

