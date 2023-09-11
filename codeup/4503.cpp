#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> v[101];
bool check[101];
int cnt = -1; //1컴퓨터 제외

void bfs(){
    queue<int> q;
    q.push(1); //1번컴퓨터 감염
    check[1]=true;

    while (!q.empty())
    {
        int now =q.front();
        q.pop();
        cnt++;

        for (int i = 0; i < v[now].size(); i++)
        {
            int x=v[now][i];
            if (!check[x]){
                q.push(x);
                check[x]=true;
            }
        }
        
    }
    


}



int main()
{
    int n,m;
    cin>>n;
    cin>>m;

    int a,b;
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    bfs();
    
    printf("%d", cnt);
    return 0;
}