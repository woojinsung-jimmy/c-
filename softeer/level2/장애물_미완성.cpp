#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int A[25][25] = {0};
int visited[25][25] = {0};
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int N;
int cnt_answer = 1;

void BFS(int i, int j);
vector<int> answer;
int main(int argc, char **argv)
{

    cin >> N;

    for (int i = 0; i < N; i++) // 지도 만들기
    {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            A[i][j] = s[j] - '0';
        }
    }

    for (int i = 0; i < N; i++) // 지도 만들기
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i][j] != 0)
            {
a
                BFS(i, j);
                cnt_answer++;
            }
        }
    }

    sort(answer.begin, answer.end);
    for (int i = 0; i < cnt_answer; i++)
    {
        cout << answer[i] << "\n";
    }
}

void BFS(int i.int j)
{
    queue<pair<int, int>> myqueue;
    myqueue.push(make_pair(i, j));

    while (!myqueue.empty())
    {
        int now[2];
        now[0].myqueue.front().first;
        now[1].myqueue.front().second;
        myqueue.pop();
        A[i][j] = cnt_answer;
        visited[i][j] = 1;
    }

    for (int k = 0; k < 4; k++)
    {
        int x = now[0] + dx[k];
        int y = now[1] + dy[k];

        if (x >= 0 && y >= 0 && x < N && y < N)
        {
            if (A[x][y] != 0 && !visited[x][y])
            {
                visited[x][y] = 1;
                A[x][y] = cnt_answer;
                myqueue.push(make_pair(x, y));
            }
        }
    }
}
