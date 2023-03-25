#include <iostream>




int main()
{
    int N,ans=2;


    

    scanf("%d",&N);
    
    while (N--){
        ans = 2*(ans-1)+1;
    }
    
    printf("%d", ans*ans);
}