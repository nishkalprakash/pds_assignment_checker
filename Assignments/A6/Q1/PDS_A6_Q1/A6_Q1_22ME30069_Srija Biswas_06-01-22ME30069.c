//Srija Biswas
//22ME30069
//Section 2
//Problem 3
//Description-
#include<stdio.h>
#include<limits.h>
#include<time.h>
long int fact(int n);
float pow(float x,int n);
double i_sin(double x);
double r_sin(double x,int n);
int main()
{
    clock_t start,end;
    double cpu_time_used,cpu_time_used1;
    float x;
    printf("Enter value of x\n");
    scanf("%f",&x);
    x=(x*3.1415926535)/180;
    printf("Time taken for iterative and recursive\n");
    start=clock();
    double sine1=i_sin(x);
    end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("%lf,",cpu_time_used);
    cpu_time_used1=cpu_time_used;
    start=clock();
    double sine2=r_sin(x,4);
    end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("%lf\n",cpu_time_used);
    printf("values are:\n");
    printf("%lf , %lf\n",sine1,sine2);
    printf("Difference in CPU timings:\n");
    printf("%lf",(cpu_time_used1-cpu_time_used));
    return 0;
}
long int fact(int n)
{
    if(n==1)
        return 1;
    else
        return (n*fact(n-1));
}
float pow(float x,int n)
{
    if(n==1)
        return x;
    else
        return (x*pow(x,n-1));
}
double i_sin(double x)
{
    int h;
    double sine=0.0;
    for(h=1;h<=4;h++)
    {
        //if(h%2!=0)
            //sine+=(double)(pow(x,h)/fact(h));
        //else
            //sine-=(double)(pow(x,h)/fact(h));
          sine+=(double)(pow(-1,h+3)*pow(x,2*h-1)/fact(2*h-1));
    }
    return sine;
}
double r_sin(double x,int n)
{

    if(n==0)
        return 0;
    else
        return ((double)(pow(-1,n+3)*pow(x,2*n-1)/fact(2*n-1))+r_sin(x,n-1));
}
