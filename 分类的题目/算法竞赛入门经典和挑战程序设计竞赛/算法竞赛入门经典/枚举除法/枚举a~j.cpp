#include <cstdio>
#include <algorithm>
using namespace std;
int a,b,c,d,e;
int f,g,h,i,j;
int n;
int main(){
	scanf("%d",&n);
	for(f=0;f<=9;f++){
		for(g=0;g<=9;g++){
			for(h=0;h<=9;h++){
				for(i=0;i<=9;i++){
					for(j=0;j<=9;j++){
					int num1=f*10000+g*1000+h*100+i*10+j;//fghij
					int num2=num1/n;//					
					a=num2/10000;b=num2/1000%10;c=num2/100%10;d=num2/10%10;e=num2%10;//abcde
					if(a!=b && a!=c && a!=d && a!=e	&& a!=f	&& a!=g	&& a!=h	&& a!=i	&& a!=j	&& 
						b!=c && b!=d && b!=e && b!=f && b!=g && b!=h && b!=i && b!=j &&
						 c!=d && c!=e && c!=f && c!=g && c!=h && c!=i && c!=j &&
						  d!=e && d!=f && d!=g && d!=h && d!=i && d!=j &&
						  	e!=f && e!=g && e!=h && e!=i && e!=j && 
							  f!=g && f!=h && f!=i && f!=j && 
							   g!=h && g!=i && g!=j &&
							    h!=i && h!=j &&
								 i!=j && num1!=num2 && num2*n==num1){//注意浮点误差，要用乘法不要chufa 
								 	
								 printf("%d\n",num1);
								 printf("     \n");
								 printf("%d\n",num2);
								 printf("_____\n");
								 printf("%d\n",n);
								 	
								 }
								 
								 
					
	}	
	}	
	}	
	}	
	}
return 0;
}
/*
枚举0～9的所有排列？没这个必要。只需要枚举fghij就可以算出abcde，然后判断是否
所有数字都不相同即可。不仅程序简单，而且枚举量也从10!=3628800降低至不到1万，而且
当abcde和fghij加起来超过10位时可以终止枚举。由此可见，即使采用暴力枚举，也是需要认
真分析问题的。
*/ 
