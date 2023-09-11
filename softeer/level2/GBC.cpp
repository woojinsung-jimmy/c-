#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> A, B;
    int N, M, max = 0;
    int len, speed;
    cin >> N >> M;
    for (int i = 0; i < N; i++) // 정해진 속도가 있는 구간
    {
        cin >> len >> speed;
        for (int i = 0; i < len; i++)
        {
            A.push_back(speed);
        }
    }

    for (int i = 0; i < M; i++) // 테스트 구간
    {
        cin >> len >> speed;
        for (int i = 0; i < len; i++)
        {
            B.push_back(speed);
        }
    }

    for (int i = 0; i < 100; i++)
    {
        if (A[i] < B[i])
        {
            if (max < (B[i] - A[i]))
            {
                max = B[i] - A[i];
            }
        }
    }

    cout << max << "\n";
}
