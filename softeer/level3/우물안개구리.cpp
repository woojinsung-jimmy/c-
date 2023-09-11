#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int N, M, a, b;
    cin >> N >> M;
    vector<int> weight(N + 1, 0);
    vector<int> best(N + 1, 1);

    for (int i = 1; i <= N; i++)
    {
        cin >> weight[i];
    }

    while (M--)
    {
        cin >> a >> b;
        if (weight[a] > weight[b])
        {
            best[b] = 0;
        }
        else if (weight[a] < weight[b])
        {
            best[a] = 0;
        }
        else
        {
            best[a] = 0;
            best[b] = 0;
        }
    }

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        if (best[i] != 0)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";
}