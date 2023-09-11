#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
long long int k,p,n, i, final;

long long cal(long long cnt){
    if(cnt==1) return p;
    long long result = cal(cnt/2);

    result = result*result%1000000007;
    if(cnt%2==1) result = (result*p) % 1000000007;
    return result;
}


int main()
{

    scanf("%lld %lld %lld",&k, &p, &n);

    long long answer = (cal(10*n)*k)%1000000007;
    cout<<answer;


}

