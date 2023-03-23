#include<stdio.h>
int main()
{
    int n, S3, a, b, c, d, e;
    printf("Write the value of n for calculating S1\n");
    scanf("%d", &n);
    printf("The value of S1 is %d\n", n*(n+1)/2);
    
    printf("Write the value of n for calculating S2\n");
    scanf("%d", &n);
    printf("The sum of squares of all numbers till n is %d\n", n*(n+1)*(2*n+1)/6);
    
    printf("Write the value of n for calculating S3\n");
    scanf("%d", &n);
    a = n%10;
    b = a/10;
    c = b%10;
    d = n/100;
    e = d;
    printf("The value of S3 is %d\n", S3 = a+c+e);
    

    return 0;
}
