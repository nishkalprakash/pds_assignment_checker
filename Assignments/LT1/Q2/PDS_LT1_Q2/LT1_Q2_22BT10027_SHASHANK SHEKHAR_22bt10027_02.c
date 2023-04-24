#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter the integer \n");
    scanf("%d",&n);
    int q=1;
    if(n<0)
    {
        q = -1;
        n = n*-1;
    }
    if(n%2==0)
    {
        printf("Most significant digit to least significant digit \n");
        int temp1 = n,temp2 = n,temp3 = n,c=0,t=1,t1=1,d,ld;
        while(temp1>0)
        {
            c++;
            temp1 = temp1/10;
            t = t*10;
        }
        t = t/10;
        while(c>0)
        {
            d = temp2/t;
            printf("%d  ",d);
            ld = temp3%10;
            temp3 = temp3/10;
            rev = ld*t+rev;
            t = t/10;
            c--;
        }
    }
    else
    {
        printf("Least significant digit to most significant digit \n");
        int temp1 = n,temp2 = n,temp3 = n,c=0,t=1,t1=1,d,ld;
        while(temp1>0)
        {
            c++;
            temp1 = temp1/10;
            t = t*10;
        }
        while(c>0)
        {
            d = temp2%t;
            printf("%d  ",d);
            ld = temp3%10;
            temp3 = temp3/10;
            rev = ld*t/10+rev;
            t = t/10;
            c--;
        }
    }
    printf("\n");
    rev = rev*q;
    printf("Reverse number = %d \n",rev);
    rev = rev*q;
    int diff = 0;
    diff = rev - n;
    if(diff<0)
        diff = diff*-1;
    printf("Difference between reverse and original number = %d",diff);
}
