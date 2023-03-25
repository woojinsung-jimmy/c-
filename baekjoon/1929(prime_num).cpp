#include <iostream>

int num[1000001];

int main(){
    int m,n,i,j;

    scanf("%d %d",&m,&n);

    num[0]=1;
    num[1]=1;

    for (i=2;i<=n;i++){
        for(j=2*i;j<=n;j+=i){
            num[j]=1;
        }
    }

    for (i=m;i<=n;i++){
        if (num[i]==0){
            printf("%d\n",i);
        }
    }

    return 0;
}