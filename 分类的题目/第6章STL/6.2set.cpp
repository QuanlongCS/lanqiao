#include <cstdio>
#include <iostream>
#include <set>
 

using namespace std;

int main(){
	set<int> st;
	
	
//	�Զ���������ȥ��
//	s.insert(x);
//	s.find();
//	s.erase(); 
//	s.size();
//	s.clear();
//	s.count();������ĳ��Ԫ�ظ���

//	������set<int>::iterator it 
	st.insert(2);
	st.insert(3);
	st.insert(5);
	st.insert(3);
	
	for(it = st.begin();it!=st.end();it++) {
		cout<<*it<<endl;
	}


	return 0;
}

