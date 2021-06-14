#include <cstdio>
#include <iostream>
using namespace std;

int main(){
//拼接	
	string str1="Leo";
	string str2=" Qlone"; 
	string str3=str1+str2;
	str1+=str2;
//	cout<<str3<<endl;
//	cout<<str1;

//比较
	//== != > < <= >=	

//length() / size()
	//基本相同

//insert
	string ins="LQlone";
	ins.insert(1,"eo"); 
 	cout<<ins<<endl;
//erase
	//1
	ins.erase(ins.begin()+0);
	cout<<ins;
	//2 ins.erase(first,last-1);
	//[first,last)
	//3
	//ins.erase(pos,length)
	//pos位+len
			//abcdefg
			//(3,2)
			//删除de
			
	
//clear		 
	//清空数据 

//substr
	str.sub(pos,len);
		//返回pos位开始长度为len的子串

//find
	str.find(str2);//返回str2在str中第一次出现的位置 
	//else return string::npos;//-1 或 
	str.find(str2,pos);//从pos位匹配str2
	 
//replace	 
	
	 
	
	
	
	
	
	
	return 0;
}

