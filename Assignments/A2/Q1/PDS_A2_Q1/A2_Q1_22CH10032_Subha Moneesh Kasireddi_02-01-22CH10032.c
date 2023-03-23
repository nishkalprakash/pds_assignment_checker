#include<stdio.h>

void main()
{
    int n,S1,S3,a,b,c;
    long S2;
    printf(" n = ");
    scanf("%d",&n);
    S1=(n*(n+1))/2;
    S2=(n*(n+1)*(2*n+1))/6;
    a=n/100;
    b=((n/10)-a*10);
    c=n-(a*100+b*10);
    S3=a+b+c;
    printf("S1 = %d\n",S1);
    printf("S2 = %ld\n",S2);
    printf("S3 = %d\n",S3);
}
