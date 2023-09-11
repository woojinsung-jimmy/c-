#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    int T, A, B, A_zero, B_zero;
    // string A_str(5, ' ');
    // string B_str(5, ' ');
    cin >> T;
    int A_str[5];
    int B_str[5];

    int led[10][7] = {
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 1, 0}, // 7
        {1, 1, 1, 1, 1, 1, 1}, // 8
        {1, 1, 1, 1, 0, 1, 1}  // 9
    };

    int zero[10] = {6, 2, 5, 5, 4, 5, 6, 4, 7, 6};

    for (int i = 0; i < T; i++)
    {
        int cnt = 0;
        cin >> A >> B;
        A_str[4] = A % 10;
        A_str[3] = (A % 100) / 10;
        A_str[2] = (A % 1000) / 100;
        A_str[1] = (A % 10000) / 1000;
        A_str[0] = A / 10000;

        B_str[4] = B % 10;
        B_str[3] = (B % 100) / 10;
        B_str[2] = (B % 1000) / 100;
        B_str[1] = (B % 10000) / 1000;
        B_str[0] = B / 10000;

        if (A / 10 == 0)
            A_zero = 1;
        else if (A / 100 == 0)
            A_zero = 2;
        else if (A / 1000 == 0)
            A_zero = 3;
        else if (A / 10000 == 0)
            A_zero = 4;
        else if (A / 100000 == 0)
            A_zero = 5;
        A_zero = 5 - A_zero;

        if (B / 10 == 0)
            B_zero = 1;
        else if (B / 100 == 0)
            B_zero = 2;
        else if (B / 1000 == 0)
            B_zero = 3;
        else if (B / 10000 == 0)
            B_zero = 4;
        else if (B / 100000 == 0)
            B_zero = 5;
        B_zero = 5 - B_zero;

        // cout << state[1][4] << state[1][3] << state[1][2] << state[1][1] << state[1][0] << "\n";
        // for (int j = 4; j >= 0; j--)
        // {
        //     for (int k = 0; k <= 6; k++)
        //     {
        //         cout << led[state[0][j]][k] << ":::" << led[state[1][j]][k] << "\n";
        //         if (led[state[0][j]][k] != led[state[1][j]][k])
        //         {
        //             cnt++;
        //         }
        //     }
        // }
        // cout <<"wh: "<< A_zero<< B_zero<<"\n";
        // cout<<"a: "<<A_str[4]<<"\n";
        if (A_zero < B_zero)
        {
            for (int i = B_zero - 1; i >= A_zero; i--)
            {
                // cout <<"b: "<< A_str[4] << "\n";
                cnt += zero[A_str[i]];
            }
            for (int i = B_zero; i <= 4; i++)
            {
                for (int k = 0; k <= 6; k++)
                {
                    if (led[A_str[i]][k] != led[B_str[i]][k])
                    {
                        cnt++;
                    }
                }
            }
        }

        else if (A_zero > B_zero)
        {
            for (int i = A_zero - 1; i >= B_zero; i--)
            {
                // cout <<"b: "<< A_str[4] << "\n";
                cnt += zero[B_str[i]];
            }
            for (int i = A_zero; i <= 4; i++)
            {
                for (int k = 0; k <= 6; k++)
                {
                    if (led[B_str[i]][k] != led[A_str[i]][k])
                    {
                        cnt++;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i <= 4; i++)
            {
                for (int k = 0; k <= 6; k++)
                {
                    if (led[B_str[i]][k] != led[A_str[i]][k])
                    {
                        cnt++;
                    }
                }
            }
        }

        cout << cnt << "\n";
    }
}