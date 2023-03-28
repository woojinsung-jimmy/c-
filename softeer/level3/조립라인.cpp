#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,time=0;
    int finish[2][1001],pass[2][1001];
    cin>>n;

    
    for (int i = 1; i <= n-1; i++){
        cin>>finish[0][i]>>finish[1][i]>>pass[0][i]>>pass[1][i];
    }
    cin>>finish[0][n]>>finish[1][n];

    for (int i = 2; i <= n; i++){ //a라인
        finish[0][i] = min({finish[0][i-1], finish[1][i-1]+pass[1][i-1]})+finish[0][i];
    }
    
    for (int i = 2; i <= n; i++){ //b라인
        finish[1][i] = min({finish[1][i-1], finish[0][i-1]+pass[0][i-1]})+finish[1][i];
    }

    cout<<min({finish[0][n],finish[1][n]}); //a,b 중 최소
}

