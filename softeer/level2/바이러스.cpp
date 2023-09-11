#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    long long int K, P, N, sum;
    cin >> K >> P >> N;
    sum = K;
    for (int i = 1; i <= N; i++) // N초 후
    {
        sum = (sum * P) % 1000000007;
    }
    cout << sum << "\n";
}
