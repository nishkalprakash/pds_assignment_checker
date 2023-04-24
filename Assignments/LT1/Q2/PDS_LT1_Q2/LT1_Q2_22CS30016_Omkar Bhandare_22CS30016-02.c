/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Problem No. - 02
Description - Reading integer printing in specific order, reversing and taking difference;
*/
#include<stdio.h>
int main()
{
    int n,N;
    int count = 0, div=1,reverse=0,diff,rem;
    printf("Enter a number : ");
    scanf("%d", &n);
    N=n;
    while(n!=0)
    {
        count++;
        div=div*10;
        n=n/10;
    }
    div=div/10;
    n=N;
    if(n%2==0)
    {
        printf("Least significant digits to most significant digits : ");
        while(n!=0)
        {
            if(n>0) printf("%d ", n);
            else printf("%d ", -n);
            n=n%div;
            div=div/10;
        }
        if(n%10==0) printf("0");
    }
    else
    {
        printf("Most significant digits to least significant digits : ");
        for(int i=1; i<=count; i++)
        {
            if ((n/div)>0) printf("%d ", n/div);
            else printf("%d", -n/div);
            div=div/10;
        }
    }
    printf("\n");
    n=N;
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("Reverse Number = %d\n", reverse);
    n=N;
    diff = n-reverse;
    if(diff>=0)
    {
        printf("Difference between reverse and original number = %d", diff);
    }
    else printf("Difference between reverse and original number = %d", -diff);
    return 0;
}
