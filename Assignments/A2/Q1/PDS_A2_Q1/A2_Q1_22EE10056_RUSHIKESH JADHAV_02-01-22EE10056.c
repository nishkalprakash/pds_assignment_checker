#include<stdio.h>

int main()
{

    int n,S1,S2,S3=0;
    printf("Enter any number between 1 and 999:");
    scanf("%d",&n);//taking input
    S1=n*(n+1)/2;//assigning values
    S2=n*(n+1)*((2*n)+1)/6;//assigning value
    S3=n%10+S3;//mimicking loop in present and upcoming lines
    n=n/10;
    S3=S3+n%10;
    n=n/10;
    S3=n%10+S3;


    printf("S1=%d S2=%d S3=%d",S1,S2,S3);//printing values
    return 0;
}
