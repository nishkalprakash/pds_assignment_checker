#include<stdio.h>
int main()
{
    int n,S1,S2,S3,a,b,c;
    printf("Enter the number n\n");
    scanf("%d",&n);
    S1 = (n*(n+1))/2;
    S2 = (n*(n+1)*(2*n+1))/6;
    a = n%10;
    b = (n%100-a)/10;
    c = (n-a-b*10)/100;
    S3 = a+b+c;
    printf("The value of S1 is %d\n",S1);
    printf("The value of S2 is %d\n",S2);
    printf("The value of S3 is %d",S3);
    return 0;
}
