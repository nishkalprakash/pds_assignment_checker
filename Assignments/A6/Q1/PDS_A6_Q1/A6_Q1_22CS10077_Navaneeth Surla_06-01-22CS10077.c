/*
Section 2
Roll No : 22CS10077
Name : Surla Navaneeth
Assignment No : 6
*/
#include<stdio.h>

   long long int fact(int n)
{
    if(n==0) return 1;
    else return n*fact(n-1);
}
    float Pow(float x, int n)
{
    if(n==0) return 1;
    else return x*Pow(x,n-1);
}
    double i_sin(double x)
{
    int n;
    double PI,sum;
    PI = 3.1415926535;
    x = (PI*x)/180;
    sum = 0;
    for(n>0;n<26;n++)
    {
        sum = sum + (Pow(-1,n+1)*Pow(x,2*n-1))/fact(2*n-1);

    }
    return sum;

}


int main()
{
    double x;
    printf("Enter the value of x : ");
    scanf("%lf",&x);
    printf("%lf",i_sin(x));
}

