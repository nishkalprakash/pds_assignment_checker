/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

int main()
{
    int n,i,x[100],y[100];
    float ax,ay,sumx=0,sumy=0,m,b,s1=0,s2=0;
    printf("Enter the number of data points: ");
    scanf("%d",&n);
    printf("x-coordinates: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("y-coordinates: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
    for (i=0;i<n;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
    }
    ax=sumx/n;
    ay=sumy/n;
    for (i=0;i<n;i++)
    {
        s1=s1+(x[i]-ax)*(y[i]-ay);
        s2=s2+(x[i]-ax)*(x[i]-ax);
    }
    m=s1/s2;
    b=ay-(m*ax);
    printf("m = %0.1f, b = %0.1f, line equation y = %0.1fx + %0.1f",m,b,m,b);

    return 0;
}
