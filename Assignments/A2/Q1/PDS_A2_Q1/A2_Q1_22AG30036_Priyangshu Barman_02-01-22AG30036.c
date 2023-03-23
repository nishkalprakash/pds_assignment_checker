#include<stdio.h>
int main()
{
    int n;
    int S1;
    int S2;
    int S3;
    printf("Enter n = ");
    scanf("%d", &n);
    S1 = (n * (n+1))/2;
    S2 = (n * (n+1) * (2*n+1))/6;
    int x = n%10;
    n = n/10;
    int y = n%10;
    n = n/10;
    int z = n%10;
    S3 = x+y+z;
    printf("S1 = %d\n",S1);
    printf("S2 = %d\n",S2);
    printf("S3 = %d\n",S3);
    return 0;
}
