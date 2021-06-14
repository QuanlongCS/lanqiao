#include <cstdio>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	//通过下标 (键)访问 
//	map<char,int> mp; 
//	mp['c']=20;
//	mp['c']=30;//cover 
//	printf("%d\n",mp['c']);//out 30 
	
	//迭代器
	map<char,int> mp; 
	mp['m']=20;
	mp['r']=30;
	mp['a']=40;
//	
//	map<char,int>::iterator it;
//	for(it=mp.begin();it!=mp.end();it++){
//		printf("%c %d\n",it->first,it->second);
//	}
	map<char,int>::iterator it=mp.find('m');
	printf("%c %d\n",it->first,it->second);
	 
	

	return 0;
}

