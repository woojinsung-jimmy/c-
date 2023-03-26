#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,k,a;
    cin>>n>>k;  //학생수 N, 구간수K 입력
    vector<int>score(1000001);
    int sum[10001];
    float ave[10001];
    int interval[2];

    for (int i = 0; i < n; i++) {
        scanf("%d\n",&score[i]);
	}

    
    for (int i = 0; i < k; i++)
    {
        cin>>interval[0]>>interval[1];
        int num = interval[1] - interval[0]+1; //구간 길이
        for (int j = 0; j < num; j++)
        {
            sum[i] += score[interval[0]+j-1];
            // printf("score:%d\n",score);
            // printf("sum:%d\n",sum);
        }
        ave[i] = ((float)sum[i])/((float)num);
    }
    
    for (int i = 0; i < k; i++)
    {
        printf("%.2f\n", ave[i]);
    }
}