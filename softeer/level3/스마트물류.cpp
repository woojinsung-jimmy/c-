#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N, K, cnt = 0;
    string s;
    cin >> N >> K;
    cin >> s;

    for (int i = 0; i < N; i++)
    {
        if (s[i] == 'P')
        {
            for (int j = -K; j <= K; j++)
            {
                if (s[i + j] == 'H')
                {
                    cnt++;
                    s[i + j] = 'X';
                    break;
                }
            }
        }
    }
    cout << cnt << "\n";
}