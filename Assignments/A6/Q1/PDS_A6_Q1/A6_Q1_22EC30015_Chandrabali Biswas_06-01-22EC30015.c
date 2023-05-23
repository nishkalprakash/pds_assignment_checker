
/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 1
Description:Calculation of sin x
*/
#include <stdio.h>  //Header file
#include <time.h>
#define pi 3.1415926535

int n,k;double sine=0;  //Global variables

long int fact(int n)  //calculates the factorial of the number
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
float power(float x,int n) //calculates the value of x raised to n
{
    if(n==0)
        return 1;
    else
        return x*power(x,n-1);
}


double i_sin(double x)  //calculates sin x using iteration
{
    double s=0.0;
    for(int i=1;i<=n;i++)
    {
      s+= power(-1.0,i)*power(x,2*i+1)/fact(2*i+1);
    }
    return s;
}
double r_sin(double x)  //calculates sin x using recursion
{
    if(k==0)
        return 0;
    else
    {
        k--;
        return (power(-1.0,k)*power(x,k)/fact(k))+r_sin(x);
    }
}



int main()  //main function
{
  double i,r,x;
  n=10;
  clock_t start,end;
  double cpu_time_used1,cpu_time_used2;
  k=n;
  printf("Enter x in degrees:");  //takes input from user
  scanf("%lf",&x);
  x=x*pi/180.0;
  start=clock();
  i= i_sin(x);
  end=clock();
  cpu_time_used1=((double)(end-start))/CLOCKS_PER_SEC;
  start=clock();
  r= r_sin(x);
  end=clock();
  cpu_time_used2=((double)(end-start))/CLOCKS_PER_SEC;
  printf("(Iterative,Recursive):%.6lf,%.6lf\n",i,r);
 printf("Difference in CPU time:%lf",cpu_time_used1-cpu_time-used2);
  return 0;
}

