#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{

    int N, M, available;
    cin >> N >> M;
    int start[100];
    int end[100];
    string room[50];
    for (int i = 0; i < N; i++) // 회의실  이름 입력
    {
        cin >> room[i];
    }

    for (int i = 0; i < M; i++) // 회의실, 시작t, 끝t 입력
    {
        cin >> room[i] >> start[i] >> end[i];
    }

    for (int i = 0; i < N; i++) // 출력
    {
        cout<<"Room "<<room[i]<<":\n";


        cout<<"-----\n";
    }
}

cout<<"Not available\n"
cout<<available<<" available:\n"