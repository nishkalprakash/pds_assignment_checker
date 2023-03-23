#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double S1, S2, S3;

    printf("enter the number : ");
    scanf("%d", &n);
    S1 = (n*(n+1))/2;
    S2 =  ((n*(n+1)*(2*n+1)))/6;
    S3 = (n/100)+((n%100)/10)+(n%100)%10;

    printf("%lf %lf %lf\n", S1,S2,S3);
    return 0;


}
