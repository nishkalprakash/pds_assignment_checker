#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    int x,i,k,d,j;
    double sum=0.00;
    printf("n= ");
    scanf("%d",&x);
    printf("k= ");
    scanf("%d",&k);
    printf("\n");
    for(i=0;i<k;i++)
    {
        d=0;
        for(j=0;j<x;j++)
        d+=rand() & 1 ? -1 : 1;
        sum+=(d*d);
    }
    sum=sqrt(sum/k);
    printf("expected distance= %lf", sum);
    printf("\n");
    
    return 0;
}