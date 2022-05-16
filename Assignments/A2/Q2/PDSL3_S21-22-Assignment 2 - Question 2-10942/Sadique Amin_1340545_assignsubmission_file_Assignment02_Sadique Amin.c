/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <math.h>, <stdio.h>, <time.h>, <stdlib.h>
Assignment Class: 6
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int k,n,p,d=0,D=0;
    float E;
    printf("Input: ");
    scanf("n=%d, k=%d",&n,&k);
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=n;j++)
        {
            p=rand()&1?-1:1;
            d=d+p;
        }
        D=pow(d,2)+D;
    }
    E=sqrt(D/k);
    printf("%f",E);
    return 0;
}