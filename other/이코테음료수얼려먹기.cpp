#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int n,m;
int graph[1001][1001];

bool dfs(int x, int y){
    if (x<=-1 || x>=n || y<=-1|| y>=m) return false; //주어진 범위 벗어날 때
    if (graph[x][y]==0){
        graph[x][y]=1;
        dfs(x-1,y);
        dfs(x+1,y);
        dfs(x,y-1);
        dfs(x,y+1);
        return true;
    }
    return false;
}


int main(void) {
    int result =0;
    cin>>n>>m;

    for (int i = 0; i < n; i++) //틀 구조 2차원 배열로 입력받기
    {
        for (int j = 0; j < m; j++)
        {
            cin>>graph[i][j];
        }   
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(dfs(i,j)==true){
                result++;
            }
        }
    }

    cout<<result;
    
    
}