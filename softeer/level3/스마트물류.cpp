#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    char line[20001];
    int n,k,cnt=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>line[i];
    }

    for (int i = 0; i < n; i++) //모든 line 검사
    {
        if(line[i]=='P'){   //로봇일때
            for (int j = k;j>=-k;j--){ //-k부터 k까지
                if (line[i-j]=='H'){
                    line[i-j]='X'; //집은건 x로 만듦
                    cnt++;  //로봇 수 증가
                    break;
                }
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<line[i];
    // }
    cout<<cnt;
    
    
}

