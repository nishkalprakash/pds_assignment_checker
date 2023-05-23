/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Assignment No : 6
* Description : Program to calculate the value of sin(x)
*/

#include <stdio.h>
#include <time.h>
#define Pi 3.1415926538

//Function to calculate factorial

long int fact(int n)
{
    if (n==0) return 1;
    else
        return n*fact(n-1);
}

//Function to calculate exponent of x
float pow(float x, int n)
{
    if (n==0) return 1;
    else return x*pow(x,n-1);
}
//Iterative Function to calculate the value of sin(x)
double i_sin(double x,int n)
{
    double sinx=0;
    for (int i=0;i<n;i++)
    {
        sinx+=(pow(-1,i)/fact(2*i+1))*pow(x,2*i+1);
    }
    return sinx;

}
//Recursive function to calculate the value of sin(x)
double r_sin(double x,int n)
{
    if (n<=0) return 0;
    else return (pow(-1,n-1)/fact(2*(n-1)+1))*pow(x,2*(n-1)+1) + r_sin(x,n-1);
}

int main()
{
     clock_t start,end;
     double cpu_time_used1,cpu_time_used2;
     int expo=10;
     float x_si;
     double rsin,isin;
     printf("Enter the value of x:");
     scanf("%f",&x_si);

     x_si=(Pi/180)*x_si;

     start=clock();
     isin=i_sin(x_si,expo);
     end=clock();
     cpu_time_used1=((double)(end-start))/CLOCKS_PER_SEC;

     start=clock();
     rsin=r_sin(x_si,expo);
     end=clock();
     cpu_time_used2=((double)(end-start))/CLOCKS_PER_SEC;
     double diff=cpu_time_used1-cpu_time_used2;

     printf("Iterative Output: %lf, Recursive Output: %lf\n",isin,rsin);
     printf("Difference in CPU time:%lf",diff);

    return 0;

}
