/*Section:2
Roll No.: 22ME10091
Name: Shreya Vadhavkar
Assignment: Lab Test
Description:*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int neg=0;
    printf("Enter the integer:");
    scanf("%d", &n);
    if(n<0)
    {
        n=-n;
        neg=1;
    }
    int digits=1;
    int i;
    for(i=10;n/i!=0;i=i*10)
    {
        ++digits;
    }
    int reverse=0;
    int m=n;
    int k = pow(10,digits-1);
    for(k=pow(10,digits-1);k!=0;k=k/10)
    {
        int j= m%10;
        reverse = reverse + j*k;
        m = m/10;
    }

    if(n%2==0)
    {
        printf("Least significant digits to most significant digit :\n");
        int l =n;
        int h;
        for(h=pow(10,digits-1); h!=0;h=h/10)
        {
            if(h!=1)
            {
            printf("%d, ", l);
            }
            else
            {
                printf("%d ",l);
            }
            int o = l/h;
            l = l - o*h;
        }
    }
    else
    {
        printf("Most significant digit to least significant digit :\n");
        int f;
        for(f= pow(10,digits-1);f!=0;f=f/10)
        {
            if(f!=1)
            printf("%d, ",n/f);
            else
                printf("%d", n/f);

        }
    }
    if(neg==1)
    {
        reverse =-reverse;
        n =-n;
    }

    printf("\n\nReverse number = %d", reverse);
    int diff;
    if(n>reverse)
    {
        diff = n-reverse;
    }
    else
    {
        diff = reverse -n;
    }
    printf("\nDifference between Reverse and original number = %d", diff);
    return 0;
}
