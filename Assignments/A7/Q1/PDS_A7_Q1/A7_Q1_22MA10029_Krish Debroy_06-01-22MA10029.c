#include <stdio.h>
#define k 10
#include <time.h>

long long int fact(int n)
{
    if (n>k)/*limit can also be used */
    {
        return fact(k);
    }
    if(n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}

float pow(float x, int n)
{
    if (n==0)
    {
        return 1.0;
    }
    if(n==1)
    {
        return x;
    }
    return (x*pow(x,n-1));
}

double i_sin(double x)
{
    double sin=0;
    for(int i=1;i<=k;i+=2)
    {
        sin = sin+ (double)(pow(-1.0,(i/2))*pow(x,i)/fact(i));
    }
    return sin ;
}

int limit =k+1;
double r_sin(double x)
{
    if (limit>0)
    {
        double l=(double)(pow(-1.0,limit/2)*pow(x,limit)/fact(limit));
        limit = limit - 2;
        return l + r_sin(x);
    }
    else{return 0;}
}


int main()
{
    float x;
    double out1, out2 ;
    printf("Enter the value of x :\n");
    scanf("%f",&x);
    x= (double)(3.1415926535 /180)*x;
    clock_t start,end;
    double cpu_time_used_i;
    double cpu_time_used_r;

    start= clock();
    out1= i_sin(x);
    end=clock();
    cpu_time_used_i=((double)(end-start));

    start= clock();
    out2= r_sin(x);
    end=clock();
    cpu_time_used_r=((double)(end-start));
    printf("%lf,%lf",out1,out2);
    printf("\nDifference in time = %lf",(cpu_time_used_i-cpu_time_used_r));





}

