#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m, u,v,ans=0;
    vector<int> a,b;

    scanf("%d %d",&n, &m);
    while (n--){
        scanf("%d %d", &u, &v);
        while(u--) a.push_back(v);
    }
    while (m--){
        scanf("%d %d", &u, &v);
        while(u--) b.push_back(v);
    }
    for (int i=0;i<100;i++){
        ans=max(ans, b[i]-a[i]);
    }
    printf("%d",ans);

}