/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 6
Description : To calculate sin(x) using iteration and recursion
*/

#include<stdio.h>
#include<time.h>

double PI = 3.1415926535;

long long int fact(int n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}

float pow(float x,int n)
{
    if(n==0) return 1;
    return x*pow(x,n-1);
}

double i_sin(double x)
{
   double sum=0;
   for(int i=0;i<30;i++)
       sum+=(pow(-1,i)*pow(x,(2*i+1)))/fact(2*i+1);
   return sum;
}

double r_sin(double x)
{
    static int i=30;
    if(i==0) return x;
    else
    {
        i--;
        return ((pow(-1,i+1)*pow(x,(2*(i+1)+1)))/fact(2*(i+1)+1))+r_sin(x);
    }
}

int main()
{
    clock_t start,end;
    double cpu_time_used;

    double x;
    scanf("%lf",&x);

    printf("%lf",i_sin(x*PI/180));
    printf(", ");
    printf("%lf",r_sin(x*PI/180));

    printf("\nDifference in CPU time : ");
    start = clock();
    i_sin(x*PI/180);
    end = clock();
    cpu_time_used = ((double)(end-start)) / CLOCKS_PER_SEC;
    printf("%lf, ",cpu_time_used);
    start = clock();
    i_sin(x*PI/180);
    end = clock();
    cpu_time_used = ((double)(end-start)) / CLOCKS_PER_SEC;
    printf("%lf",cpu_time_used);

   return 0;
}
