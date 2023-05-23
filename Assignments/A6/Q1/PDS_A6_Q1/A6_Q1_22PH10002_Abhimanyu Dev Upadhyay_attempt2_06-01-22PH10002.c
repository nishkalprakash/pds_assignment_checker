//22PH10002
//Lab 6 Problem 1
//Calculating sin x

#include <stdio.h>
#include <time.h>
#define pi 3.1415926535

long int fact(int n)
{
    long int nfact;
    if(n>1)
    {
      nfact = n*fact(n-1);
    }
    else
    {
        return 1;
    }
    return nfact;
}
float pow(float x, int n)
{
    float xn;
    if(n>0)
    {
        xn = x*pow(x,n-1);
    }
    else
    {
        return 1;
    }
    return xn;
}
double i_sin (double x)
{
    double isin = 0;
    int n = 1;
    int turn = 1;

    while(fact(n)<pow(2,60))
    {
        isin = isin + turn*pow(x,n)/fact(n);
        turn = turn*-1;
        n = n+2;
    }

    return isin;
}
double r_sin(double x, int n)
{
    double rsin = x;

    if(fact(2*n+1)<pow(2,60))
    {
        rsin = rsin + r_sin(-1*pow(x,2*n+1)/fact(2*n+1),n+1);
    }

    return rsin;
}
int main()
{
    double x;
    scanf("%lf", &x);
    clock_t starti,endi,startr,endr;
    double cpur, cpui;

    starti = clock();
    double isin = i_sin(x*pi/180);
    endi = clock();

    startr = clock();
    double rsin = r_sin(x*pi/180,1);
    endr = clock();

    cpui = ((double)endi - starti) / CLOCKS_PER_SEC;
    cpur = ((double)endr - startr) / CLOCKS_PER_SEC;

    printf("%lf %lf %lf", isin, rsin, cpui - cpur);
    return 0;
}
