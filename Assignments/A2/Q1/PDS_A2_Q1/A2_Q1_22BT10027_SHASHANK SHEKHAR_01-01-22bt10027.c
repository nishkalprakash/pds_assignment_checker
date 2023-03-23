#include <stdio.h>
int main()
{
    int n, S1,S3;//variable declaration
    long int S2;
    printf("Enter a number \n");//entering n
    scanf("%d",&n);
    S1 = (n*(n+1))/2;
    S2 = (n*(n+1)*(2*n+1))/6;
    int a,b,c;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n;
    S3 = a+b+c;
    printf("The value of S1 = %d \n",S1);
    printf("The value of S2 = %d \n",S2);
    printf("The value of S3 = %d \n",S3);
    return 0;
}
