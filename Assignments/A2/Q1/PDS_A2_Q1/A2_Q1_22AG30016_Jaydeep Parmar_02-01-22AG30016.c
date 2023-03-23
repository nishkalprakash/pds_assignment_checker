#include<stdio.h>
int main()
{
    int n;
    printf("write any 3 digit integer\n");
    scanf("%d",&n);
    int S1;
    S1=((n+1)* n)/2;
    printf("sum of integer of series is %d\n",S1);
    int S2;
    S2=((n)*(n+1)*(2*n+1))/6;
    printf("sum of squares of integer in that series is %d\n",S2);
    int a,b,c,d,S3;
    a=n/100;
    b=n%100;
    c=b/10;
    d=b%10;
    S3=a+c+d;
    printf("sum of integer of digit is %d\n",S3);
    return 0;
}
