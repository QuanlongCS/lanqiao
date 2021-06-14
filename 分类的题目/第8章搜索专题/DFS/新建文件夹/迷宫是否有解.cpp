#include <iostream>
#include <cstdio>
using namespace std;
int n, m;
int f;
char mp[15][15];
int vis[15][15];
int dir[4][2] = {{-1, 0}, {0,1}, {1,0}, {0,-1}};
bool in(int x, int y){
    return 0<= x && x < n&& 0 <= y && y < m;
}
void dfs(int x, int y){
    if (mp[x][y] == 'T'){
        f = 1;
        return;
    }
    if (!in(x,y)||mp[x][y]=='*'||vis[x][y]){
        return;
    }
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++){
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        dfs(tx,ty);
    }
    return;
}
int main(){
	scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%s", mp[i]);
    }
    int x, y;
    for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
           if (mp[i][j] == 'S'){
               x = i;
               y = j;
           }
       }
    }
    dfs(x, y);
    if (f){
        printf("yes\n");
    }else{
        printf("no\n");
    }
	
	return 0;
}

