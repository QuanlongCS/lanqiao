#include <cstdio>
#include <iostream>
using namespace std;

int main(){
//ƴ��	
	string str1="Leo";
	string str2=" Qlone"; 
	string str3=str1+str2;
	str1+=str2;
//	cout<<str3<<endl;
//	cout<<str1;

//�Ƚ�
	//== != > < <= >=	

//length() / size()
	//������ͬ

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
	//posλ+len
			//abcdefg
			//(3,2)
			//ɾ��de
			
	
//clear		 
	//������� 

//substr
	str.sub(pos,len);
		//����posλ��ʼ����Ϊlen���Ӵ�

//find
	str.find(str2);//����str2��str�е�һ�γ��ֵ�λ�� 
	//else return string::npos;//-1 �� 
	str.find(str2,pos);//��posλƥ��str2
	 
//replace	 
	
	 
	
	
	
	
	
	
	return 0;
}

