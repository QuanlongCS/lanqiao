#include <cstdio>
#include <iostream>
#include <vector>
//���� vector<int> v;
//���βv.push_back();
//ɾ��βv.pop_back; 
//size()
//clear()�������Ԫ�� O(N) 
//insert(v.begin()+pos,key); 
//erase(v.begin()+pos)���ĳλ�û�ĳ���� 
//erase(v.begin+a,v.begin()+n)�������ҿ�����[a,b)
using namespace std;

int main(){
	vector<int> v;
	for(int i=0;i<=3;i++){
		v.push_back(i);
	} 
	
	//v.pop_back();
	v.insert(v.begin()+2,9);
	v.erase(v.begin()+2);
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";	
	}
	return 0;
}

