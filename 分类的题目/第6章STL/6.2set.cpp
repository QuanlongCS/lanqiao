#include <cstdio>
#include <iostream>
#include <set>
 

using namespace std;

int main(){
	set<int> st;
	
	
//	自动递增排序去重
//	s.insert(x);
//	s.find();
//	s.erase(); 
//	s.size();
//	s.clear();
//	s.count();集合中某个元素个数

//	迭代器set<int>::iterator it 
	st.insert(2);
	st.insert(3);
	st.insert(5);
	st.insert(3);
	
	for(it = st.begin();it!=st.end();it++) {
		cout<<*it<<endl;
	}


	return 0;
}

