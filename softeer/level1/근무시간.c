#include <stdio.h>

int main(void)
{
    int hour1[5];
    int hour2[5];
    int hour_sum[5];

    int min1[5];
    int min2[5];
    int min_sum[5];

    int total=0;

    
    for (int i=0;i<5;i++){
         scanf("%d:%d %d:%d",&hour1[i], &min1[i], &hour2[i], &min2[i]);
    }

    for (int i=0;i<5;i++){
        hour_sum[i] = hour2[i]-hour1[i];
        min_sum[i] = min2[i]-min1[i];
    }

    for (int i=0;i<5;i++){
        total += hour_sum[i]*60 +min_sum[i];
    }

    printf("%d", total);
}