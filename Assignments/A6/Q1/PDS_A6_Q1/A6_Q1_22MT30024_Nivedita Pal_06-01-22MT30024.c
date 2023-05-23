#include<stdio.h>
double sin(double x)
{
    sin(x)=0;
    for(n>=0)
        sin(x)+=((pow(-1,n))*(pow(x,2*n-1)))/fact(n)
}
long int fact(int n)
{
    if (n==1)
        return(1);
    else
        return (n*fact(n-1));
}
float pow(float x,float n)
{
    if (n==1)
        return(1);
    else
        return (x*pow(x,n-1));
}
void main()
{
  double x;
  int n;
  printf("Enter the value of x in degrees");
  scanf(%lf,&x);
  x=(x*3.14)/180;
  printf("sin x=%lf",sin(x));




}
