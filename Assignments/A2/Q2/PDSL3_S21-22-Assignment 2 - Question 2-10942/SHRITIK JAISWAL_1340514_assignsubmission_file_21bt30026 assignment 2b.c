#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//taking random numbers as steps as 1 and -1 and calculating the expected distance
int main()
{
    srand(time(NULL));
    int n,i,k,d,j;
    double sum=0.00;
    printf("n= ");
    scanf("%d",&n);
    printf("k= ");
    scanf("%d",&k);
    printf("\n");
    for(i=0;i<k;i++)
    {
        d=0;
        for(j=0;j<n;j++)
//taking  the random 1 and -1.
        d+=rand() & 1 ? -1 : 1;

//calculating summation. 
        sum+=(d*d);
    }
//calculatong expected values DE=root(D/K)
    sum=sqrt(sum/k);
    printf("expected distance= %lf", sum);
    printf("\n");
    
    return 0;
}