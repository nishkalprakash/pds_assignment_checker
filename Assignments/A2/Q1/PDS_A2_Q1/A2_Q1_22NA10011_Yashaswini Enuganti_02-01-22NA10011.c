#include<stdio.h>
#include<math.h>
int main()
{
    int n,S1,S2,S3;
    printf("Let \'n\'be the integer variable.\n Enter the integer variable,n=");// assume n is a 3 digit number
    scanf("%d",&n);
    printf("%d\n Let the value of sum of the integers upto \'n\' is S1\nS1=",n);
    S1=n*(n+1)/2;
    printf("%d\n Let the sum of the squares of integers upto \'n\' is S2\nS2=",S1);
    S2=n*(n+1)*(2*n+1)/6;
    S3=(n%10)+((n/10)%10)+((n/10)/10);
    printf("%d\n Sum of the digits of n is given by S3\nS3=%d\n",S2,S3);
    printf("For n=%d,we get\nS1=%d\nS2=%d\nS3=%d",n,S1,S2,S3);




}
