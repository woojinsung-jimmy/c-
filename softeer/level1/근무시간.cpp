#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int sum = 0;
    int hour[5][2];
    int min[5][2];
    for (int i = 0; i < 5; i++)
    {

        scanf("%d:%d %d:%d", &hour[i][0], &min[i][0], &hour[i][1], &min[i][1]);

        if (min[i][0] > min[i][1]) // 출근 분이 퇴근 분보다 클 때
        { 
            sum += (hour[i][1] - hour[i][0] - 1) * 60;
            sum += min[i][1] + 60 - min[i][0];
        }
        else
        {
            sum += (hour[i][1] - hour[i][0]) * 60;
            sum += min[i][1] - min[i][0];
        }
    }

    cout << sum << "\n";
    return 0;
}