/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 1
*Description-Program to calculate sinx through iterative method and recursive method.
*/
#include <stdio.h>
#define PI 3.1415926535
#include <time.h>

int fact(int n);
float pow(float x,int n);
double i_sin(double x);
double r_sin(double x,int n);

int main ()
{
    clock_t start,end;
    double cpu_time_used;

    double n;
    printf("Enter angle in degree : ");
    scanf("%lf",&n);

    start=clock();
    printf("\nrecursive value of sin(%lf)=%lf\n",n,r_sin((n*PI)/180,0));
    printf("Iterative value of sin(%lf)=%lf",n,i_sin((n*PI)/180));
    end=clock;
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nDifference in CPU Time = %lf units\n",cpu_time_used);

    return 0;
}

int fact(int n)
{
    if (n<=0)
        return 1;
    else
        return n*fact(n-1);
}

float pow(float x,int n)
{
    if (n==0)
        return 1;
    if (n>0)
        return x*pow(x,n-1);
    if (n<0)
        return (1/x)*pow(x,n+1);
}

double i_sin(double x)
{
   double sinx=0,a=1;
   int n=0;
   while (a>0)
   {
       a=pow(-1,n)*(pow(x,(2*n+1)))/fact((2*n+1));
       sinx+=a;
       n++;
       if (n==100)
        break;
   }
   return sinx;
}

double r_sin(double x,int n)
{
    if (n==100)
        return 0;
    double sinx;
    sinx=pow(-1,n)*(pow(x,(2*n+1)))/fact((2*n+1));
    if (sinx>0)
        return sinx+r_sin(x,n+1);
    else
        return sinx;
}


