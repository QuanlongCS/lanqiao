#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string  str;
	cin>>str;
	sort(str.begin(),str.end());
	int n=0;
	do {
		//cout<<str<<endl;
		if(n==3) {
			cout<<str<<endl;
			break;
		}

		n++;
	} while(next_permutation(str.begin(),str.end()));

	return 0;
}

