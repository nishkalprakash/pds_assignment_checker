#include<stdio.h>
#include<math.h>
int main()
{
    int n,S1,S2;
    printf("enter a no:\n");
    scanf("%d",&n);
    S1=((n+1)*n)/2;
    printf("sum of n nos is %d\n:",S1);
    S2=(((n+1)*((2*n)+1))*n)/6;
    printf("sum of square of n nos is %d\n:", S2);
    return 0;
}

