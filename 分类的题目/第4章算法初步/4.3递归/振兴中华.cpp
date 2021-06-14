#include <cstdio>

using namespace std;

int dfs(int x,int y){
	if(x == 4 || y==  4)
		return 1;
			
	return dfs(x+1,y)+dfs(x,y+1);
	
	
} 
int main(){
//04
//3 
	
	printf("%d ",dfs(0,0));
	
	return 0;
}

