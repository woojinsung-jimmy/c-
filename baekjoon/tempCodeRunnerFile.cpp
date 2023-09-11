// 친구 관계 파악하기
#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> A;
static vector<int> visited;
static bool arrive;
void DFS(int now, int depth);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    arrive = false;
    cin >> N >> M;
    A.resize(N);
    visited = vector<int>(N, 0);

    for (int i = 0; i < M; i++)
    {
        int start, end;
        cin >> start >> end;
        A[start].push_back(end);
        A[end].push_back(start);
    }

    for (int i = 0; i < N; i++)
    {
        DFS(i, 1);
        if (arrive)
        {
            break;
        }
    }
}

void DFS(int now, int depth)
{
    if (depth == 5 || arrive)
    {
        arrive = true;
        return;
    }

    visited[now] = true;

    for (int i = 0; i < A[now].size(); i++)
    {
        if (visited[A[now][i]] == 0)
        {
            DFS(A[now][i], depth + 1);
        }
    }
    visited[now]=false;
}
