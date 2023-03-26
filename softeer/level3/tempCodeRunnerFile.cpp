#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,m,a,b,answer=0;


int main()
{

    cin>>n>>m;

    vector<bool> iambest(n+1,1);
    vector<int> power(n+1,0);
    for (int i = 1; i <= n; i++)
    {
        cin>>power[i];
    }
    
while(m--){
    cin>>a>>b;
    if(power[a]<power[b]) iambest[a]=0;
    else if(power[a]>power[b]) iambest[b] = 0;
    else{
        iambest[a]=0;
        iambest[b]=0;
    }
}
    for (int i = 1; i <=n; i++)
    {
        if(iambest[i]=1) answer++;
    }

    cout<<answer;
    
}

