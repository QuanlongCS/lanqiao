# C /C++基础问题



## 输入scanf

> 用scanf输入数据到数组中需要加&吗？

逐个输入数组中的数，是要用&的，

但是如果是字符数组，以字符串形式**整体输入**道，就不用，示例：
char a[20];
scanf("%s",a);
直接输入字符数组a中的全部内版容就可以了，当然，长度不能超过权19



## 精度控制

``` c
printf("%.*f",p,ans);//b就是*当要保留的小数位数为变量时用*号代替
```



## 读文件



```c
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
```



## 字符串的输入输出

```c
char str[size];
	gets(str);
	puts(str);
//定义str大小
//gets输入
//puts输出
```



