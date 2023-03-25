#include <iostream>

using namespace std;

int main(){
    int a,b,v,i,sum=0;
    cin>>a>>b>>v;

    i= (v-b-1)/(a-b)+1;
    cout<<i<<endl;
    return 0;
}