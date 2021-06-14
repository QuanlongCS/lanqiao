## A[(1949)16]

【问题描述】
请问十六进制数1949对应的十进制数是多少？请特别注意给定的是十六进制，求的是十进制。
【答案提交】
这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。6473

```
6473
```

## B[19000]

【问题描述】
不超过19000的正整数中，与19000互质的数的个数是多少？
【答案提交】
这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。

```c++
//7200
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a,int b){

	if(a%b==0)
		return b;
		
		
	
	return gcd(b,a%b);
	
} 
int main(){
	
	int n=19000;
	int cnt=0;
	for (int i=1;i<n;i++){
		if(gcd(i,n)==1)
			cnt++;
	}
	
	cout<<cnt;
	
	return 0;
}

```



## C[gcd]

【问题描述】
70044与113148的最大公约数是多少？
【答案提交】
这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。

```c++
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a,int b){

	if(a%b==0)
		return b;
		
		
	
	return gcd(b,a%b);
	
} 
int main(){
	
	int n,m;
	cin>>n>>m;
	int res=gcd(n,m);
	cout<<res;
	//70044 113148
	//5388
	return 0;
}

```

## D[最多结点数]

【问题描述】
一棵10层的二叉树，最多包含多少个结点？
注意当一棵二叉树只有一个结点时为一层。
【答案提交】
这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。

```
2^n - 1
2^10 -1 = 1023
```

## E[洁净数]

【问题描述】
小明非常不喜欢数字 2，包括那些数位上包含数字 2 的数。如果一个数的数位不包含数字 2，小明将它称为洁净数。
请问在整数 1 至 n 中，洁净数有多少个？
【输入格式】
输入的第一行包含一个整数 n。
【输出格式】
输出一行包含一个整数，表示答案。
【样例输入】
30
【样例输出】
18
【评测用例规模与约定】
对于 40% 的评测用例，1 <= n <= 10000。
对于 80% 的评测用例，1 <= n <= 100000。
对于所有评测用例，1 <= n <= 1000000。

```c++
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int is_clean(int n){
	if(n==2)
		return 0;
	while(n){
		if(n%10==2)
			return 0;
		
		n/=10;

	}
	return 1;
}
int main(){
	
	int n;
	int cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(is_clean(i))
			cnt++;
	}

	cout<<cnt;
	
	
	return 0;
}

/*
1 3 4 5 6 7 8 9 10 
11 13 14 15 16 17 18 19 
30
*/
```



## F[最大距离]

【问题描述】
在数列 a_1, a_2, ..., a_n中，定义两个元素 a_i 和 a_j 的距离为 |i-j|+|a_i-a_j|，即元素下标的距离加上元素值的差的绝对值，其中 |x| 表示 x 的绝对值。
给定一个数列，请问找出元素之间最大的元素距离。
【输入格式】
输入的第一行包含一个整数 n。
第二行包含 n 个整数 a_1, a_2, ..., a_n，相邻的整数间用空格分隔，表示给定的数列。
【输出格式】
输出一行包含一个整数，表示答案。
【样例输入】
5
9 4 2 4 7
【样例输出】
9
【样例说明】
a_1 和 a_3 的距离为 |1-3|+|9-2|=9。
【评测用例规模与约定】
对于 50% 的评测用例，2 <= n <= 100，0 <= 数列中的数 <= 1000。
对于所有评测用例，2 <= n <= 1000，0 <= 数列中的数 <= 10000。

```c++
#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;
int n;
int a[10005];

int main(){
	
	cin>>n;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	int max=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int ans =abs(i-j) + abs(a[i]-a[j]);
			if( ans > max)
				max=ans;
			
			
		}
	}
	
	cout<<max;
	
	
	return 0;
}

```



## G[最长递增]

【问题描述】
在数列 a[1], a[2], ..., a[n] 中，如果 a[i] < a[i+1] < a[i+2] < ... < a[j]，则称 a[i] 至 a[j] 为一段递增序列，长度为 j-i+1。
给定一个数列，请问数列中最长的递增序列有多长。
【输入格式】
输入的第一行包含一个整数 n。
第二行包含 n 个整数 a[1], a[2], ..., a[n]，相邻的整数间用空格分隔，表示给定的数列。
【输出格式】
输出一行包含一个整数，表示答案。
【样例输入】
7
5 2 4 1 3 7 2
【样例输出】
3
【评测用例规模与约定】
对于 50% 的评测用例，2 <= n <= 100，0 <= 数列中的数 <= 1000。
对于所有评测用例，2 <= n <= 1000，0 <= 数列中的数 <= 10000。



```c++
//找一个序列中最长的连续递增序列
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n;
int a[10005];

int main(){
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	
	int cnt=0;
	for(int j=0;j<n;j++){
		if(j+1==n)//判断特殊情况,
			break;
			
		if( a[j]<a[j+1] ){//一般情况
			cnt++;	//+1
			
		}

	}
	
	cout<<cnt;
	return 0;
}

```





## H[字符计数]



【问题描述】
给定一个单词，请计算这个单词中有多少个元音字母，多少个辅音字母。
元音字母包括 a, e, i, o, u，共五个，其他均为辅音字母。
【输入格式】
输入一行，包含一个单词，单词中只包含小写英文字母。
【输出格式】
输出两行，第一行包含一个整数，表示元音字母的数量。
第二行包含一个整数，表示辅音字母的数量。
【样例输入】
lanqiao
【样例输出】
4
3
【评测用例规模与约定】
对于所有评测用例，单词中的字母个数不超过100。

```
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int is_yuan(char c){
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
		return 1;
	return 0;
} 

int main(){
	string s;
	cin>>s;
	int y=0;
	int f=0;
	for(int i =0 ;i < s.length() ; i++){
		if(is_yuan(s[i]))
			y++;
		if(!is_yuan(s[i]))
			f++;
	}
	
	cout<<y<<endl;
	cout<<f;
	
	
	
	return 0;
}

```



jimu



```c
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n,m;
int map[1005][1005];
int h;

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
			
		}
	} 
	
	cin>>h;
	
	int sum=0;
	for(int k=0;k<h;k++){
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(map[i][j]){
					sum++;	
					--map[i][j];
				}
				
			}
		} 
		
		cout<<sum<<endl;
	}
	
	return 0;
}

```



