/*
Anindita Malviya
21MI33004
Section3
Code blocks
Question 4
*/


#include <stdio.h>
#include <math.h>

int main()
{
    int n,m, sumx = 0,sumY = 0;
    int meanx,meany;
    printf("No. of Points: ");
    scanf("%d",&n)
    int X[n],Y[n];
    for (int i = 0; i<n; i++)
    {
        printf("x-coordinates: ");
        scanf("%d",X[i]);
        printf("y-coordinates: ");
        scanf("%d",Y[i]);
        sumx = sumx + X[i];
        sumY = sumY + Y[i];
    }

    meanx = sumx/n;
    meany = sumY/n;
    for (int i = 0; i<n ; i++)
    {
        m = ((X[i]-meanx)*(Y[i]-meany))/((X[i]-meanx)*(X[i]-meanx))
    }
    printf("m = %d",m);
}
