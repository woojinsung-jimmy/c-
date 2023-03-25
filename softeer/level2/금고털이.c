#include <stdio.h>


int main(void)
{
	int w,n,m[10000]={},p[10000]={},o[10000]={},i,money=0;    //o 다 더함, m 무게, p가치
	scanf("%d %d",&w, &n);
    for (i=1;i<=n;i++){
        scanf("%d %d",&m[i],&p[i]);
        o[p[i]] = o[p[i]] + m[i];
    }


    for (i=n;i>=1;i--){
        if (w<o[i]){
            money += i*w;
            break;

        }
        else{
            money += i*o[i];
            w = w-o[i];
        }
    }

    printf("%d",money);
	return 0;
}