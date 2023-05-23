#include<stdio.h>
int p=-1;
long long int fact( long int n)
{
   long long int f;
   if(n==1)
    return 1;
   else
    return n*fact(n-1);
}
double pow(double x,int n)
{
   double f;
   if(n>0)
    f=x*pow(x,n-1);
   if(n==0)
    return 1;
   else return f;

}
double i_sin(double x)
{
    double sum=0.0,c;
    int i=3;
    c=x;
    while (i<=39)
    {
        sum=sum+c;
        if(c>0)
            c=-(pow(x,i)/fact(i));
        else c=(pow(x,i)/fact(i));
        i=i+2;
    }
    return sum;

}
double r_sin(double x)
{
    double sum,b;
    p=p+2;
    if(p==39)
        return -(pow(x,39)/fact(39));
    else
    {
        if(p%4==1)
            b=(pow(x,p)/fact(p));
        else
            b=-(pow(x,p)/fact(p));
        sum=b+r_sin(x);
        return sum;
    }
}
double r_sin(double);
double pow(double,int);
long long int fact( long int);
double i_sin(double);
int main()
{
    double x;
    printf("Enter x for sin(x)in degrees: ");
    scanf("%lf",&x);
    x=x*3.1415926535/180;
    printf("sinx by (iterative,recursive)= (%lf,%lf)",i_sin(x),r_sin(x));
    return 0;
}


