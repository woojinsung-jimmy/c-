// DFS와 BFS 프로그램
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;
static bool arrive;
void DFS(int node);
void BFS(int node);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, start;
    arrive = false;
    cin >> N >> M >> start;
    A.resize(N+1);
    visited = vector<bool>(N + 1, false);

    for (int i = 0; i < M; i++)
    {
        int st, end;
        cin >> st >> end;
        A[st].push_back(end);
        A[end].push_back(st);
    }

    for (int i = 1; i < N+1 ; i++)
    {
        sort(A[i].begin(), A[i].end());
    }
    DFS(start);
    cout << "\n";
    fill(visited.begin(), visited.end(), false);
    BFS(start);
    cout << "\n";
}

void DFS(int node)
{
    cout << node << " ";
    visited[node] = true;

    for (int i = 0; i < A[node].size(); i++)
    {
        if (visited[A[node][i]] == 0)
        {
            DFS(A[node][i]);
        }
    }
}

void BFS(int node)
{
    queue<int> myqueue;
    myqueue.push(node);
    visited[node] = true;

    while (!myqueue.empty())
    {
        int now_node = myqueue.front();
        myqueue.pop();
        cout << now_node << " ";
        for (int i = 0; i < A[now_node].size(); i++)
        {
            if (visited[A[now_node][i]] == 0)
            {
                visited[A[now_node][i]]=true;
                myqueue.push(A[now_node][i]);
            }
        }
    }
}
