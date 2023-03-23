#include<stdio.h>
#include<math.h>
int main()
{
    int n,S1,S2,S3,a;
    printf("Enter an three digit integer\n");
    scanf("%d",&n);
    S1=(n*(n+1))/2;
    S2=(n*(n+1)*(2*n+1))/6;
    a=n/10;
    S3=(n/100)+(n%10)+(a%10);
    printf("S1=sum of natural numbers upto %d\n",n);
    printf("S2=sum of squares of natural numbers upto %d\n",n);
    printf("S3=sum of digits of integers of %d\n",n);
    printf("S1 = %d\nS2 = %d\nS3 = %d",S1,S2,S3);
    return 0;
}
