    #include <stdio.h> 
    #include <iostream> 
    using namespace std;
     
    int main() 
    { 
        int a,b; 
        freopen("in.txt","r",stdin); //�����ض����������ݽ���in.txt�ļ��ж�ȡ
        freopen("out.txt","w",stdout); //����ض���������ݽ�������out.txt�ļ���
        
        while(cin>> a >> b) 
            cout<< a+b <<endl; // ע��ʹ��endl
            
        fclose(stdin);//�ر��ļ�
        fclose(stdout);//�ر��ļ�
        return 0; 
    }
/*in
1 3
2 4
3 7
out
4
6
10
*/
