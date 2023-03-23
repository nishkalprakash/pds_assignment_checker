#include<stdio.h>
int main()
{
    int n,S1,S2,S3,a,a1,b,c;
    printf("Enter a number: ");
    scanf("%d",&n);
    S1 = (n*(n+1))/2;
    S2 = (n*(n+1)*(2*n+1))/6;
    a = n/100;
    a1 = n%100;
    b = a1/10;
    c = a1%10;
    S3 = a+b+c;
    printf("The sum of first %d natural numbers is %d\n",n,S1);
    printf("The sum of squares of first %d natural numbers is %d\n",n,S2);
    printf("The sum of digits of %d is %d",n,S3);

}
