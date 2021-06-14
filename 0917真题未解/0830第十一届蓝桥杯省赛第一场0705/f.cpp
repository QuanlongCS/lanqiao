/*

*/
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin>>s;
	
	int W=0,w=0,n=0;
	
	for(int i=0;i<s.length();i++){
		if(s[i]>='A' && s[i]<='Z')
			++W;
		if(s[i]>='a' && s[i]<='z')
			++w;
		if(s[i]>='0' && s[i]<='9')
			++n;
	}
	cout<<W<<endl;
	cout<<w<<endl;
	cout<<n<<endl;
	
	return 0;
}

