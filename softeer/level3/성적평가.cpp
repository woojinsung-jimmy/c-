#include <iostream>
#include <vector>

using namespace std;

int n,a;
int score[3][100001];
int result[100001];

int main()
{
    cin>>n;
    for (int i = 0; i < 3; i++) //각 대회별
    {
        for (int j = 0; j < n; j++){//각 사람별 점수
            cin>>score[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++) //1번째 대회
    {
        int cnt=1;
        for (int j = 0; j < n; j++){
            if(score[0][i]<score[0][j]) cnt++;
        }
        result[i] += score[0][i];
        printf("%d ",cnt);
    } 
    
    printf("\n");
    for (int i = 0; i < n; i++) //2번째 대회
    {
        int cnt=1;
        for (int j = 0; j < n; j++){
            if(score[1][i]<score[1][j]) cnt++;
        }
        result[i] += score[1][i];
        printf("%d ",cnt);
    } 

    printf("\n");
    for (int i = 0; i < n; i++){ //3번째 대회
        int cnt=1;
        for (int j = 0; j < n; j++){
            if(score[2][i]<score[2][j]) cnt++;
        }
        result[i] += score[2][i];
        printf("%d ",cnt);
    } 

    printf("\n");
    for (int i = 0; i < n; i++){ //대회 결과
        int cnt=1;
        for (int j = 0; j < n; j++){
            if(result[i]<result[j]) cnt++;
        }
        printf("%d ",cnt);
    } 
}

