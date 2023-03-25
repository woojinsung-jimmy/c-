#include <stdio.h>

int main(void)
{
    int t;
    int numCnt[10] = {6, 2, 5, 5, 4, 5, 6, 4, 7, 6}; 
    int a_num[1000], b_num[1000];
    int a_led[5], b_led[5];   //0번 열은 숫자, 1~7번 열은 세그먼트(1 or 0);
    int count;
    int segment[10][7]={
        {1,1,1,1,1,1,0},
        {0,1,1,0,0,0,0},
        {1,1,0,1,1,0,1},
        {1,1,1,1,0,0,1},
        {0,1,1,0,0,1,1},
        {1,0,1,1,0,1,1},
        {1,0,1,1,1,1,1},
        {1,1,1,0,0,1,0},
        {1,1,1,1,1,1,1},
        {1,1,1,1,0,1,1},
    };
    for (int i=0;i<10;i++){
        for (int j=0; j<7;j++){
                printf("%d ",segment[i][j]);
            }
        printf("\n");
        }

    // int seg_zero[7]=   {1,1,1,1,1,1,0};
    // int seg_one[7]=    {0,1,1,0,0,0,0};
    // int seg_two[7]=    {1,1,0,1,1,0,1};
    // int seg_three[7]=  {1,1,1,1,0,0,1};
    // int seg_four[7]=   {0,1,1,0,0,1,1};
    // int seg_five[7]=   {1,0,1,1,0,1,1};
    // int seg_six[7]=    {1,0,1,1,1,1,1};
    // int seg_seven[7]=  {1,1,1,0,0,1,0};
    // int seg_eight[7]=  {1,1,1,1,1,1,1};
    // int seg_nine[7]=   {1,1,1,1,0,1,1};


    scanf("%d",&t);



    for (int i = 0;i<t;i++){
        scanf("%d %d", &a_num[i], &b_num[i]);  
    }


    int digit_a[1000];
    int digit_b[1000];
    for (int i = 0;i<t;i++){
        int temp1 = a_num[i];
        int temp2 = b_num[i];
        while(n != 0){
            temp1 = temp1/10;
            ++digit_a[i];
        }
        while(n != 0){
            temp2 = temp2/10;
            ++digit_b[i];
        }
    }
    


    for (int i=0;i<t;i++){
        count = 0;
        a_led[4] = a_num[i]%10;    //1의 자리
        b_led[4] = b_num[i]%10;

        a_led[3] = (a_num[i]%100)/10;  //10의 자리
        b_led[3] = (b_num[i]%100)/10;

        a_led[2] = (a_num[i]%1000)/100;  //100의 자리 12345
        b_led[2] = (b_num[i]%1000)/100;

        a_led[1] = (a_num[i]%10000)/1000;      //1000의 자리
        b_led[1] = (b_num[i]%10000)/1000;
        
        a_led[0] = a_num[i]/10000;      //10000의 자리
        b_led[0] = b_num[i]/10000;
        

        for (int i=0;i<5;i++){
            printf("%d ", a_led[i]);

        }
        printf("\n");
        for (int i=0;i<5;i++){
            printf("%d ", b_led[i]);

        } printf("\n");

        //a_led[i]  어떤 1의자리 숫자
        if (digit_a[i] != digit_b[i]){


        }
        for (int i=0;i<5;i++){
            for (int j=0; j<7;j++){
                if (segment[a_led[i]][j] != segment[b_led[i]][j]){
                    count++;
                }
                // count += (segment[a_led[i]][j] != segment[b_led[i]][j]);
            }
            printf("%d\n", count);
        }
        printf("final: %d\n", count);
    }


}