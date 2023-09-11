#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> menu, user;

int compare(int i, int j, int M);

int main(int argc, char **argv)
{

    int N, M, K, temp, flag = 0;
    cin >> M >> N >> K;

    for (int i = 0; i < M; i++) // 비밀 메뉴 조작법 입력
    {
        cin >> temp;
        menu.push_back(temp);
    }

    for (int i = 0; i < N; i++) // 사용자의 조작 입력
    {
        cin >> temp;
        user.push_back(temp);
    }

    for (int i = 0; i < N; i++) // 비교
    {
        flag = compare(i, 0, M);
        if (flag == 1)
        {
            cout << "secret\n";
            break;
        }
    }

    if (flag == 0)
    {
        cout << "normal\n";
    }

}

int compare(int i, int j, int M)
{
    if (j == M)
    {
        return 1;
    }
    
    if (user[i + j] == menu[j])
    {
        compare(i, j + 1, M);
    }
    else
    {
        return 0;
    }
}
