/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 6
Question: 1
Description: Expansion of sin x*/
#include<stdio.h>
#include<time.h>
#define PI 3.1415926538
int f=1;
float p=1;
int n=5;
int nr=5;
double ra=0;
double ia=0;
int ir=0;
clock_t start, end;
double cpu_time_used;
long int fact(int n)
{
    if(n==1) return f;
    f*=n;
    fact(n-1);
}
float pow(float x, int n)
{
    if(n==0) return p;
    p*=x;
    pow(x,--n);
}
double i_sin(double x)
{
    int i=0;
double m=0;
    for(i=0; i<=n; i++)
    {
        m+=(pow(-1,i))*(pow(x,2*i+1)/fact(2*i+1));

    }
    return m;
}
double r_sin(double x)
{
    if(nr==0) return ra;
    ra+=(pow(-1,ir))*(pow(x,2*ir+1)/fact(2*ir+1));
    ir++;
    nr--;
    r_sin(x);
}

int main()
{
    start=clock();
    int number;
//printf("%lf",i_sin(PI/180));
    scanf("%d",&number);
    printf("%lf , ",r_sin(number*PI/180));
    p=1;
     printf(" %lf",i_sin(number*PI/180));
    end=clock();
    cpu_time_used=((double)(end-start))/ CLOCKS_PER_SEC;
    return 0;
}

