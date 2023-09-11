#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> grade;
    int start[10001];
    int end[100001];
    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++) // 학생 수, 구간 수 입력
    {
        int temp;
        cin >> temp;
        grade.push_back(temp);
    }

    for (int i = 0; i < K; i++) // K개 구간 입력
    {
        cin >> start[i] >> end[i];
    }

    for (int i = 0; i < K; i++) // K개 구간의 평균
    {
        float sum = 0, len=0;
        float average;
        len = end[i] - start[i] + 1;
        for (int j = start[i] - 1; j < end[i]; j++)
        {
            sum += grade[j];
        }
        average = sum / len;

        cout << fixed;
        cout.precision(2);
        cout << average << "\n";
    }
}