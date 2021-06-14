#include <cstdio>
#include <iostream>
using namespace std;
int arr[10]={3,1,4,7,0,9,8,6,2,5};
int n=10;			   
void select_sort(){
	for(int i=0;i<n;i++){
		int k=i;//将第一个未排序元素作为最小值 
		//第二次是将本次循环开始位置作为最小值 
		for(int j=i+1;j<n;j++){//向后遍历每个未排序元素 
			
			if(arr[j]<arr[k]){//如果元素小于最小值 
				k=j;//设置为新的最小值 
			}	
		}
		int temp=arr[i];//遍历本次后将最小值和第一位未排序元素交换 
		arr[i]=arr[k];
		arr[k]=temp;
		
	}
	return ;
}

void insert_sort(){
	int cur;//当前循环次元素 
	int pos;//永远指向有序序列的最后位置，也就是cur-1的位置 
	//从0开始默认第一位元素已经排序 
    for(int i=1;i<=n;i++){
		// 3 1 4 1 5
		//3 |1 4 1 5
		   
    	int pos=i-1; 	 //有序序列的最后一个位置 
        int cur = arr[i];//保存待排序元素值 
        
        //对于右边已排序的元素进行插入
		//if cur大于等于pos不执行下while直接加入pos后面 
        while( (pos>=0)/*最后个有序位到0的遍历*/ && (cur<arr[pos])){/*当前次迭代元素要*/
         
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

