/*
<p>������������<br>1200000�ж��ٸ�Լ����ֻ������Լ������<br>�����ύ��<br>����һ�������յ��⣬��ֻ��Ҫ���������ύ���ɡ�����Ľ��Ϊһ�����������ύ��ʱֻ��д�����������д��������ݽ��޷��÷֡�

*/
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int n=1200000;
	
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(n%i==0)
			cnt++;
			
	}
	
	cout<<cnt;
	
	
	return 0;
}

