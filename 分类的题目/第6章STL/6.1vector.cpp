#include <cstdio>
#include <iostream>
#include <vector>
//定义 vector<int> v;
//添加尾v.push_back();
//删除尾v.pop_back; 
//size()
//clear()情况所有元素 O(N) 
//insert(v.begin()+pos,key); 
//erase(v.begin()+pos)清除某位置或某区间 
//erase(v.begin+a,v.begin()+n)清除左闭右开区间[a,b)
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

