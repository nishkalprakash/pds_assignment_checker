/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 6
* Description :
*/
#include<stdio.h>
#define PI 3.1415926535
//function for finding factorial
int fact(long int n)
{
    int p=1;
    if(n==1)
        return 1;
    else
    return n*fact(n-1);
}
//given below is a function for finding power
float pow(float x,int n)
{
    while(n>1)
    {
        return x*pow(x,n-1);
    }
}
//given below is an iterative function for finding sin x value
double i_sin(double x)
{
  int p;
  while(p<50)
  {
  x+=pow(-1,p)*pow((float)x,2*p+1)/fact((int)2*p+1);
  p++;
  }
  return x;
}
//given below is a recursive program for finding sin x value
double r_sin(double x)
{
    double t;
  static int n=0;
  if(n==0)
  {
      t=1*pow(-1,n+1)*pow((float)x,2*n+1)/fact((int)2*n+1);
      return -t;
  }
  else if(n==20)
    return 1;
  else
  {
  t=pow(-1,n+1)*pow((float)x,2*n+1)/fact((int)2*n+1);
  n++;
  return t+r_sin(x);
  }

}
int main()
{

   float x;
   printf("Enter the value of x\n");
   scanf("%f",&x);
   x*=(PI/180);
   printf("%lf\n",i_sin(x));
   printf("%lf",r_sin(x));
   return 0;
}
