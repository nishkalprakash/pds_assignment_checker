#include <stdio.h>
int main()
 {
    int n;
    int sum=0;
    int m;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
    m=n%10;
    sum=sum+m;
    n=n/10;

    }
    printf("sum is=%d",sum);
    return 0;
 }
