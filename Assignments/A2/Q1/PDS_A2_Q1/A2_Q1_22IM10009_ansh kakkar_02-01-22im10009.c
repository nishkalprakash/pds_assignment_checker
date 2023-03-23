#include<stdio.h>
int main()
{
    int n,S1,S3,d1,d2,d3;
    long int S2;
    printf("enter the value of n\n");
    scanf("%d",&n);

    S1=(n*(n+1))/2;//THE SUM OF N NATURAL NUMBERS.
    S2=((n)*(n+1)*(2*n+1))/6;//THE SUM OF SQUARE OF N NATURAL NUMBERS
    d1=n%10;//THE LAST DIGIT OF NUMBER N(RIGHTMOST).
    n=n/10;
    d2=n%10;//THE MIDDLE DIGIT OF NUMBER N(MIDDLEONE).
    n=n/10;
    d3=n%10;//THE FIRST DIGIT OF NUMBER N(LEFTMOST) .
    S3=d1+d2+d3;//SUM OF DIGITS OF NUMBER N.
    printf("s1: %d\n",S1);
    printf("s2: = %d\n",S2);
    printf("s3: = %d\n",S3);
    return 0;
}
