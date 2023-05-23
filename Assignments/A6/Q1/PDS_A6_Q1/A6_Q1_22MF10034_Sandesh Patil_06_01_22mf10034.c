#include<stdio.h>

int fact(int n);
float power(float x,int n);
int main()
{
    int a=4,c=2,m,n;
    float b=3.14;
    printf("factorial =%d \n",fact(4));
    return 0;

}

int fact(int n)
{
    int z;
    for(z=0;z<n;z++)
    {if(n<=2)
    {
        printf("fact = %d",n);
    }
    else
    return fact(n-1)*n;}
}

float power(float x,int n)
{
    if(n==1)
    return x;
    else
    return power(x,n-1);
}
