#include <cstdio>
#include <iostream>
using namespace std;
int arr[10]={3,1,4,7,0,9,8,6,2,5};
int n=10;			   
void select_sort(){
	for(int i=0;i<n;i++){
		int k=i;//����һ��δ����Ԫ����Ϊ��Сֵ 
		//�ڶ����ǽ�����ѭ����ʼλ����Ϊ��Сֵ 
		for(int j=i+1;j<n;j++){//������ÿ��δ����Ԫ�� 
			
			if(arr[j]<arr[k]){//���Ԫ��С����Сֵ 
				k=j;//����Ϊ�µ���Сֵ 
			}	
		}
		int temp=arr[i];//�������κ���Сֵ�͵�һλδ����Ԫ�ؽ��� 
		arr[i]=arr[k];
		arr[k]=temp;
		
	}
	return ;
}

void insert_sort(){
	int cur;//��ǰѭ����Ԫ�� 
	int pos;//��Զָ���������е����λ�ã�Ҳ����cur-1��λ�� 
	//��0��ʼĬ�ϵ�һλԪ���Ѿ����� 
    for(int i=1;i<=n;i++){
		// 3 1 4 1 5
		//3 |1 4 1 5
		   
    	int pos=i-1; 	 //�������е����һ��λ�� 
        int cur = arr[i];//���������Ԫ��ֵ 
        
        //�����ұ��������Ԫ�ؽ��в���
		//if cur���ڵ���pos��ִ����whileֱ�Ӽ���pos���� 
        while( (pos>=0)/*��������λ��0�ı���*/ && (cur<arr[pos])){/*��ǰ�ε���Ԫ��Ҫ*/
         
		    arr[pos+1] = arr[pos];
            pos--;
        
		}
		
        arr[pos+1] = cur;
    }
        
        
	return ;
}
void insert_sort_2(){
	int cur,pos;
	
	for(int i=1;i<n;i++){
		pos=i-1;
		cur=arr[i];
		
		while(pos>=0 && cur<arr[pos]){
			
			arr[pos+1]=arr[pos];
			pos--;
		
		}
		arr[pos+1]=cur;
	}
	
} 


int main(){
	
	cout<<"before"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";	
	}
	//
	
	//select_sort();
	insert_sort_2();
	
	//
	cout<<"\n"<<"after"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	

	return 0;
}

