#include <stdio.h>
#include <math.h>
int main()
{
    int n,S1,S2,S3 ,x ,y , z;
    printf("Enter the value of the integer :");
    scanf("%d",&n);
    S1 = (n*(n+1))/2 ;
    S2 = (n*(n+1)*((2*n)+1))/6  ;
    x = n%10 ;
    y = (n%100 - x)/10  ;
    z = (n - x - y ) / 100  ;
    S3 = x+y+z ;
    printf("The value of S1 is %d \nthe value of S2 is %d\nthe value of S3 is %d",S1,S2,S3);
    return 0;

}
