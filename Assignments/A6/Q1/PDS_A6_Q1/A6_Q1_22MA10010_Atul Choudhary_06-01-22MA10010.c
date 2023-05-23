#include<stdio.h>
 int fact(int n);
{
    if(n==1)
    {
        return 1;
    }

    return n*fact(n-1);
}

float pow(float x, int x);
{
    if(n==1)
    {
        return(x*pow(x, n-1));
    }
}

int main()