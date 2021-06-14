# 复合结构

## 1.结构体的定义和使用                

> char *str = "www.dotcpp.com" ; 这是对字符指针进行初始化。此时,字符指针指向一个字符串常量的首地址。 

结构体与数组类似,都是由若干分量组成的,与数组不同的是,结构体的**成员**可以是**不同类型**,可以通过**成员名**来访问结构体的元素。

### 定义

```
struct 结构类型名{
	数据类型 成员1;
	数据类型 成员2;
	数据类型 成员n;
	
};
```

结构的定义说明了变量在结构中的存在格式，要使用就必须**说明**结构类型变量

### 说明

```
struct 结构类型名称 结构变量名;
```

个认为定义是创建类，说明是声明了对象

```c
struct address student1;//变量student1为“address”类型结构变量。
```

### 访问

结构体再使用时作为整体，但经常性的对某个变量访问

```
结构变量名.成员名称
student1.tel;//表示结构变量student1的电话信息

```

### 初始化

```
struct 结构类型名 结构变量={
	初始化数据1;
}
```

### Code

````c
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct _INFO{
	int num;
	char str[256];
}; 

int main(){
	struct _INFO A;
	A.num=2014;
	strcpy(A.str,"welcome to cpp");
	printf("%d %s",A.num,A.str);

	return 0;
}
//2014 welcome to cpp

````

## 2.结构体的高级使用

### 数组

> 其数组的每一个元素都是结构体类型，用来表示一个班的学习档案

定义数组结构与与普通结构变量相似，仅声明为数组类型

```
比如定义一个结构体数组 student,包含 3 个元素:student[0],[1]、[2],每个数组元素都 
具有 struct address 的结构形式,并对该结构体数组进行初始化赋值: 

struct address{
	cahr name[30];
	cahr street[40];
	long tel;
	long zip;
}
strudent[3]={
	"rodk","beijing1",1111,,200012;
		"rodk1","beijing1",1111,,200012;
			"rodk2","beijing1",1111,,200012;
}
```

### 指向结构体的指针

> 一个指针用来指向一个结构体变量时,称之为结构体指针变量
>
> 结构体指针变量中的值是所指向的,结构变量的首地址,通过结构指针即可访问该结构变量。

```c 
struct 结构类型名  *结构指针变量名
struct address {
	int a;
	float b;
};
struct A,m,*P=&m;
此时操作m和*p的是等价
```

## 3.共用体

