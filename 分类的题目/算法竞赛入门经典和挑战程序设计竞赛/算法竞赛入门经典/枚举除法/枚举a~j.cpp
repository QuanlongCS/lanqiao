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
								 i!=j && num1!=num2 && num2*n==num1){//ע�⸡����Ҫ�ó˷���Ҫchufa 
								 	
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
ö��0��9���������У�û�����Ҫ��ֻ��Ҫö��fghij�Ϳ������abcde��Ȼ���ж��Ƿ�
�������ֶ�����ͬ���ɡ���������򵥣�����ö����Ҳ��10!=3628800����������1�򣬶���
��abcde��fghij����������10λʱ������ֹö�١��ɴ˿ɼ�����ʹ���ñ���ö�٣�Ҳ����Ҫ��
���������ġ�
*/ 
