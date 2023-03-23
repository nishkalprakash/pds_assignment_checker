#include<stdio.h>
#include<math.h>

int main()
{
    int n,s1,s2,s3=0;
    printf("enter a number");
    scanf("%d",&n);
    s1=n*(n-1)/2;
    s2=(n*(n-1)*(2*n-1))/6;
    s3=s3+n%10;
    n=n/10;
    s3=s3+n%10;
    n=n/10;
    s3=s3+n%10;
    printf("s1=%d\ns2=%d\ns3=%d\n",s1,s2,s3);
    return 0;
}