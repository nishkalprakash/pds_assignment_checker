#include<stdio.h>

int main()
{
    int n,S1,S3,q1,q2;
    long S2;
    printf("n = ");
    scanf("%d",&n);
    S1 = (n*(n+1))/2;
    S2 = (n*(n+1)*(2*n+1))/6;
    q1 = (n-(n%10))/10;
    q2 = (q1-(q1%10))/10;
    S3 = (n%10) + (q1%10) + (q2%10);
    printf("S1 = %d\n",S1);
    printf("S2 = %ld\n",S2);
    printf("S3 = %d\n",S3);


return 0;
}
