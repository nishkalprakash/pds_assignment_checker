#include <stdio.h>
#include <time.h>
long long int fact(long long int );
float pow(float,int);
double i_sin(double);
double r_sin(double,int);
long long int fact(long long int n)
{
    long long int factprev;
    if (n==1)
    {
        return 1;
    }
    else
    {
        factprev=fact(n-1);
        return n*factprev;

    }
}
float pow(float x,int n)
{
    float prev;
    if (n==0)
    {
        return 1;
    }
    else
    {
        prev=pow(x,n-1);
        return x*prev;
    }
}
double i_sin(double x)
{
    double term=1,sum=0,pi=3.1415926535;
    int i,max=20;//max is defined in case the series doesn't converges before so setting an upper limit
    x=(x*pi)/180;//converting degrees to radians
    for(i=1;i<=max;i++)
    {
        term=pow(x,(2*i-1))/fact(2*i-1);
        sum=sum+term;
    }
    return sum;

}
double r_sin(double x,int n)
{
    double pi=3.1415926535,sum;
    if (n==1)
        return x;
    else
    {
        if(n%2==0)
        {
            sum=r_sin(x,n-1)+(pow(x,(2*n-1))*(-1));
            return sum;
        }
        else
        {


            sum=r_sin(x,n-1)+(pow(x,(2*n-1)));
            return sum;
        }
    }
}
int main()
{
    double x,a,b;
    printf("Enter the value of x");
    scanf("%lf",&x);
    clock_t start1,end1,start2,end2;
    double cpu_time_used1,cpu_time_used2;
    start1=clock();
    a=i_sin(x);
    end1=clock();
    cpu_time_used1=((double)(end1-start1))/CLOCKS_PER_SEC;
    start2=clock();
    b=r_sin(x,20);
    end2=clock();
    cpu_time_used2=((double)(end2-start2))/CLOCKS_PER_SEC;
    printf("%lf, %lf\n",a,b);
    printf("Difference in CPU time is:");
    printf("%lf",((cpu_time_used2-cpu_time_used1)>0?(cpu_time_used2-cpu_time_used1):(cpu_time_used1-cpu_time_used2)));




}

