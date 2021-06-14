[toc]









# 比较常用的

## next_permutation

```c++
全排列
next_permutation(a,a+n);


do{
	for(1~n);
		cout<<arr[i];
	
}while(next_permutation(arr,arr+n));


```

## stack queue

```c++
#include<queue>//队列 
#include<stack>//栈
stack<int>  s;//参数也是数据类型，这是栈的定义方式
queue<int>  q; //参数是数据类型，这是队列的定义方式
```



## binary_search

```c++
1 先排序sort再二分查找
    
#include <algorithm>
bool binary_search(arr[],arr[]+size,index){
	//arr[]： 数组首地址
    //size：数组元素个数
    //indx:需要查找的值
}
//在数组中以二分法检索的方式查找，若在数组(要求数组元素非递减)中查找到indx元素则真，
//若查找不到则返回值为假。
```

## lower_bound

```c++
//查找第一个大于或等于某个元素的位置
lower_bound(arr[],arr[]+size , indx){
```

## upper_bound

```c++
//查找第一个大于某个元素的位置。
upper_bound(arr[],arr[]+size , indx):    
```

## 小结



```c
/*
数组有序 
  1 2 2 4 
//0 1 2 3;
lower_bound(start,end,val) val第一次出现的位置;	(,,2);return 1; 

upper_bound(start,end,val) 第一个大于val出现的位置;(,,2);return 3; 

binary_search(start,end,val)  是否存在val 
*/
```



## sort

```c
include <algorithm>

sort(start,end,cmp);
sort(arr,arr+n,greater<int>());
    less<type>()    //从小到大排序 <
	grater<type>()  //从大到小排序 >
```

## reverse

```c++

string str="hello world , hi"; reverse(str.begin(),str.end());
    //str结果为 ih , dlrow olleh

vector<int> v = {5,4,3,2,1}; reverse(v.begin(),v.end());
//容器v的值变为1,2,3,4,5


```







#  不常用

## atoi

```c++
	字符串转数字	
//char *str="123";
	char str[6]="12345";
	int n=atoi(str);
	printf("%d",n+1);
```



## map

```c
#include <map>
using namespace std;

map<键type,值type> mp;
//字符串的映射使用string
```

### map的访问

#### 1通过下标访问 (键)

```c
int main(){
	
	map<char,int> mp; 
	mp['c']=20;
	mp['c']=30;//cover 
	printf("%d\n",mp['c']);//out 30 

	return 0;
}

```

#### 2通过迭代器

map迭代器与其他stl迭代器定义方式相同

```c
1 map<type1,type2>::iterator it;
2 但是每队映射有两组值所以
     用first来访问键
     用second访问值
3 且map会自动实现升序
int main(){
    
    map<char,int> mp; 
	mp['m']=20;
	mp['r']=30;
	mp['a']=40;
	
	map<char,int>::iterator it;
	for(it=mp.begin();it!=mp.end();it++){
		printf("%c %d\n",it->first,it->second);
	}
    return 0;
}
   	
```



### map常用函数解析

#### find(key)

返回键为key的映射值的迭代器

```c
int main(){	
	map<char,int> mp; 
	mp['m']=20;
	mp['r']=30;
	mp['a']=40;

	map<char,int>::iterator it=mp.find('m');
	printf("%c %d\n",it->first,it->second);
	return 0;
}
//m 20
```

#### 2 erase()

删除单个元素

```
1map<char,int>::iterator it= mp.find('a');mp.erase(it);
2mp.erase('a');
```

删除区间元素

```c
mp.erase(first,last)//[first,last)

map<char,int>::iterator it= mp.find('a');
mp.erase(it,mp.end());
    
```

#### 3 size()

获取map中键值对的数量(以上面例子为例 3)

```
mp.size();
```

#### 4 clear()

清空

### map的常见用途

1在一些与字符串之间的映射中的题目



## string

>c语言用字符串数组存储字符串这样会很麻烦,c++STL中加入了string类型封装了一些常用功能

加入头文件

```c++
#include <string> 
using namespace std;

```

### string的定义

```c++
int mian(){
    string str="qlone";
    return 0;
}
```

### string中的访问方式

#### 1通过下标访问

