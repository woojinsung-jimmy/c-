#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{

    int W, N;
    int sum = 0;
    cin >> W >> N;
    vector<pair<int, int>> A;
    for (int i = 1; i <= N; i++)
    {
        int mass, price;
        cin >> mass >> price;
        A.push_back(pair<int, int>(price, mass));
    }

    sort(A.begin(), A.end());

    while (W > 0)
    {
        for (int i = N-1; i >=0; i--)
        {
            // cout << A[i].first<<" "<< A[i].second<<"\n";
            if (W > A[i].second)
            {
                sum += (A[i].second * A[i].first);
                W = W - A[i].second;
            }
            else if (W <= A[i].second)
            {
                sum += W * A[i].first;
                W = 0;
            }
        }
        // cout<<sum<<"\n";
    }

    cout << sum << "\n";
}
