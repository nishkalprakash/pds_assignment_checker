#include <stdio.h>
int main()
{
    int n, S1, S2, S3, n1, n2, n3;
    printf("Enter a three digit number\n");
    scanf("%d",&n);
    S1 = (n*(n+1))/2;
    S2 = (n*(n+1)*(2*n+1))/6;
    n1 = n%10;
    n2 = (n%100-n1)/10;
    n3 = (n-n1-n2*10)/100;
    S3 = n1+n2+n3;
    printf("The value of S1 is %d\n1",S1);
    printf("The value of S2 is %d\n2",S2);
    printf("The value of S3 is %d",S3);
    return 0;
}
