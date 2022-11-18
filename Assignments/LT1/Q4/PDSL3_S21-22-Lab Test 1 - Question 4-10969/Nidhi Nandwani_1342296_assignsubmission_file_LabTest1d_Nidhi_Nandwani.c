/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int x[10]; int y[10];
    printf("x-coordinates: ");
    for(int i=0; i<10; i++) scanf("%d", &x[i]);
    printf("y-coordinates: ");
    for(int i=0; i<10; i++) scanf("%d", &y[i]);
    float meanX, meanY, m, b, m1, m2;
    for(int i=0; i<10; i++)
    {
        meanX += x[i];
        meanY += y[i];
    }
    meanX= meanX/10; meanY=meanY/10;
    for(int i=0; i<10; i++)
    {
        m1 += (x[i] - meanX)*(y[i]- meanY);
        m2 += (x[i]- meanX)*(x[i] - meanX);
    }
    m = m1/m2;
    b =meanY- m*meanX;
    printf("m = %.1f, b = %.1f\n",m, b);
    printf("Line equation: y=%.1fx + %.1f", m, b);
}