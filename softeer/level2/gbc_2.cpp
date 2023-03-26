#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m, u,v,ans=0;
    vector<int> set,test;
    cin>>n>>m;

    for (int i = 0; i < n; i++)
    {
        cin>>u>>v;
        for (u; u > 0; u--)
        {
            set.push_back(v);
        }
    }

    for (int i = 0; i < m; i++)
    {
        cin>>u>>v;
        for (u; u > 0; u--)
        {
            test.push_back(v);
        }
    }
    
    for (int i = 0; i < 100; i++)
    {
        if (test[i]-set[i]>ans)
        {
            ans = test[i]-set[i];
        }
    }
    cout<<ans;

}