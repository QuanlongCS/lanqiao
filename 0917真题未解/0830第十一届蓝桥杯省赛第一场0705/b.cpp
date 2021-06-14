/*
EaFnjISplhFviDhwFbEjRjfIBBkRyY
YeRikGSunlRzgDlvRwYkXkrGWWhXaA
--------------------------------
Process exited with return value 0
Press any key to continue . . .



*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;



int main(){
	string cstr= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string Tcstr="yxmdacikntjhqlgoufszpwbrevYXMDACIKNTJHQLGOUFSZPWBREV";
	//c:YeRi Tc:EaFn
	string in;
	cin>>in;

	for(int i=0;i<in.length();i++){//in string length
		for(int j=0;j<Tcstr.length();j++){//Tc string length
			if(in[i]==Tcstr[j])
				cout<<cstr[j];
		}
	}

	
	
	
	return 0;
}

