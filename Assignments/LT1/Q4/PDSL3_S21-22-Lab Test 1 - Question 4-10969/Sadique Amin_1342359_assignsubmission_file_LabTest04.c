/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/

#include <stdio.h>

int main()
{
    int xarr[10];
    int yarr[10];
    int xmean,ymean,xs=0,ys=0;
    printf("x-coordinates: ");
    for (int i=0;i<10;i++)
    {
        scanf("%d",&xarr[i]);
        xs=xs+xarr[i];
    }
    printf("y-coordinates: ");
    for (int i=0;i<10;i++)
    {
        scanf("%d",&yarr[i]);
        ys=ys+yarr[i];
    }
    xmean=xs/10;
    ymean=ys/10;
    int p,d;
    for(int i=0;i<10;i++)
    {
        p=(xarr[i]-xmean)*(yarr[i]-ymean);
        d=(xarr[i]-xmean)*(xarr[i]-xmean);
    }
    float m=(float)p/d;
    float b=ymean-m*xmean;

    printf("m = %f, b = %f, line equation y = %fx + %f",m,b,m,b);

    return 0;
}