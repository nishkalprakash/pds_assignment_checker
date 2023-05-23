/* Name: Ratan Kumar
Roll no.: 22EC10067
Section: 2
Assignment No.: 1*/
#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    n*fact(n-1);
    return n*fact(n-1);
}
float pow(float x, int n)
{
    if(n==1)
    {
        return x;
    }
    return x*pow(x,n-1);

}
double i_sin(double x)
{
    x=x*(3.141592)/180;
    float sinx=x;
    int i=1;
    while(i<=5)
    {
        float temp=pow(x,2*i+1);
        int imo = fact(2*i+1);
        float flag = pow(-1,i);
        sinx = sinx+ (flag)*(temp/imo);
        i++;
    }
    return sinx;
}
double r_sin(double x)
{
}
int main()
{
    int n;
    float power;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    long factorial = fact(n);
    printf("%d\n",factorial);
    float x;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    power= pow(x,n);
    printf("value of x to the power n is : %5.2f\n",power);
    float value = i_sin(x);
    printf("value of sinx is : %0.2f",value);
    return 0;
}







