// 연결 요소의 개수 구하기
#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> A;
static vector<int> visited;
void DFS(int v);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    A.resize(N + 1);
    visited = vector<int>(N + 1, 0);

    for (int i = 0; i < M; i++)
    {
        int start, end;
        cin >> start >> end;
        A[start].push_back(end);
        A[end].push_back(start);
    }

    int count = 0;

    for (int i = 1; i < N + 1; i++)
    {
        if (!visited[i]) // 방문 안했을 때
        {
            count++;
            DFS(i);
        }
    }
    cout << count << "\n";
}

void DFS(int v)
{
    if (visited[v])
    {
        
        return;
    }

    visited[v] = 1;
    for (int i = 0; i < A[v].size(); i++)
    {   
        if (visited[A[v][i]] == 0)
        {   
            DFS(A[v][i]);
        }
    }
}