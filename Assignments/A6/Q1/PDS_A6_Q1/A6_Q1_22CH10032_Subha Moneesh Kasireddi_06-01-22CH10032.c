#include<stdio.h>
#include<time.h>

#define PI 3.1415926535

int fact(int n);
float pow(float x, int n);
double i_sin(double x);
double r_sin(double x);
double term(double x, int n);


int fact(int n)
{
    if(n==1)
    return 1;
    else
    return (n*fact(n-1));
}

float pow(float x, int n)
{
    if(n==1) return x;
    else
    return (x*pow(x,(n-1)));
}

double i_sin(double x)
{
    int n=5;
    double sum=0.0;
    while(n>=0)
    {
        sum = sum + pow(x,(2*n+1))/fact(2*n+1);
        --n;
    }
    return sum;
}

/*double r_sin(double x)
{
    int n=5;
    double sum;
    if(n==0) return 0;
    sum = r_sin(n-1);
    sum = sum + term(x,n);
    return sum;
}*/

double term(double x, int n)
{
    return (pow(x,(2*n+1))/fact(2*n+1));
}

int main()
{
    float deg,x;
    scanf("%f",deg);
    printf("%lf\n",term(1,0));
    x=PI*deg/180;
    printf("%lf",i_sin(x));
    //printf("%lf",r_sin(x));
    return 0;
}

/*clock_t start,end;
double cpu_time_used;

start = clock();


 printf("\nDifference in CPU time: %lf",cpu_time_used);


end = clock();
cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
*/
