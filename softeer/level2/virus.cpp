#include <iostream>

int main(){
    long long k,p,n;

    scanf("%lld %lld %lld", &k, &p, &n);

    for (int i=0;i<n;i++){
        k = (k*p)%1000000007;
    }

    printf("%lld",k);
}