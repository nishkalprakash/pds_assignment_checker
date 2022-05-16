#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int num = (rand() % (1000 - 5 + 1)) + 5;
    int i=0,a,a_sum=0,a_num=0,b,b_sum=0,b_num=0,a_point=0,b_point=0,a_badge=0,b_badge=0,a_result,b_result;
    while(i<num)
    {
        printf("Player A Enter the number\n");
        scanf("%d",&a);
        printf("Player B Enter the number\n");
        scanf("%d",&b);
    while(a >= 1){
            a = num%10;
            a_sum= a_sum*10 + a;
            a_num++;
            a /= 10;
        }
    while(b >= 1){
            a = num%10;
            b_sum= b_sum*10 + a;
            b_num++;
            b /= 10;
        }
    if(a_num>b_num)
    {
        printf("A's number: %d B's number: 6%d\nA's point: %d B's point: %d\nA's badge: %d B's badge: %d\n",a,b,a_num,b_num,1,0);
        printf("A wins");
        a_point+=a_num;
        b_point+=b_num;
        a_badge=a_badge++;
    }
    else if(a_num==b_num)
    {
        if(a_sum>b_sum){
            printf("A's number: %d   B's number: 6%d\nA's point: %d   B's point: %d\nA's badge: %d   B's badge: %d\n",a,b,a_sum,b_sum,1,0);
            printf("A wins");
            a_point+=a_sum;
            b_point+=b_sum;
            a_badge=a_badge++;}
        else{
            printf("A's number: %d   B's number: 6%d\nA's point: %d   Bs point: %d\nA's badge: %d   B's badge: %d\n",a,b,a_sum,b_sum,0,1);
            printf("B wins");
            a_point+=a_sum;
            b_point+=b_sum;
            b_badge=b_badge++;}
    }
    else
    {
        printf("A's number: %d   B's number: 6%d\nA's point: %d   B's point: %d\nA's badge: %d   B's badge: %d\n",a,b,a_num,b_num,0,1);
        printf("B wins");
        a_point+=a_num;
        b_point+=b_num;
        b_badge=b_badge++;
    }
    i++;
    }
    a_result=a_point*a_badge;
    b_result=b_point*b_badge;
    if(a_result>b_result) printf("A's Total score=%d and B's Total score=%d\nA win's",a_result,b_result);
    else printf("A's Total score=%d and B's Total score=%d\nB win's",a_result,b_result);
    return 0;
}
