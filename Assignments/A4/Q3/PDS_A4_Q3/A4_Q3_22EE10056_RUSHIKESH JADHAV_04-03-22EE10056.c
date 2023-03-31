/*
section 2
roll no:-22EE10056
Name:-rushikesh santosh jadhav
assignment no:-4
Description:-numero pyramid for given height*/
#include<stdio.h>

int main()
{
    int n,i,j,a,b;//declaring variables
    printf("Enter no of rows:");//asks for input
    scanf("%d",&n);//stores input
    for(i=1;i<=n;i++)//loop control for rows
    {
        for(j=1;j<=n-i;j++)//prints blank spaces at starting
        {
            printf(" ");
        }
        a=i;
        for(j=1;j<=i;j++)//prints digits in loop
        {
            b=a%10;
            printf("%d",b);
            a++;//increment
        }
        a=a-2;
        for(j=1;j<=i-1;j++)//prints digits in loop
        {
            b=a%10;
            printf("%d",b);
            a--;//decrement
        }
        printf("\n");
    }
    return 0;
}
