/*Section 2
Roll no.: 22ME10091
Name: Shreya Vadhavkar
Assignment : 6
Description: Taylor's series for sinx */

#include<stdio.h>
long int fact(int);
float pow(float,int);
double i_sin(double);
double r_sin(double);
int main()
{
double x;
scanf("%lf",&x);
x=x*3.14/180;//deg to rad
double is=i_sin(x);//calling iterative function
double rs =r_sin(x);//calling recursive function
printf("%lf %lf",is,rs);//print output
}
long int fact(int n)
{
    static long int pro=1;
    if(n>0)
    {
        pro=pro*n;
        --n;
        fact(n);
    }


    else
    {
        return pro;//returns factorial
    }
}
float pow(float x,int n)
{
    static float res=1.0;
    if(n!=0)
    {
        res*=x;
        --n;
        pow(x,n);
    }
    else
    {
        return res;
    }
}
double i_sin(double x)
{
    int i=0;
    double result=0;
    for(i=0;i<9;++i)
    {
        double num=(double)((pow((float)x,((2*i)+1))*(pow(-1.0,i))));
        double den = (double)fact((2*i)+1);
        result=result + (num/den);
    }
    return result;
}
double r_sin(double x)
{
    static int i=0;
    static double result =0;
    if(i<9)
    {
        float num=(pow(x,2*i+1))*(pow(-1.0,i));
        long int den = fact(2*i+1);
        result+=num/den;
        ++i;
        r_sin(x);
    }
    else
    {
        return result;
    }
}

