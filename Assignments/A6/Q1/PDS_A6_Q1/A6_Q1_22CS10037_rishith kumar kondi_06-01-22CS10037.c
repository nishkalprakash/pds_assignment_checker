#include<stdio.h>
#include<time.h>
#define pi 3.1415926535
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
double pow(double x,int n)
{
    double s;
    if(n<=0){return 1;}
    else s=(x*pow(x,n-1));
    return (s);
}
double i_sin(double x)
{
    double s=0,i;
    for(i=0;i<=15;i++){
            s=s+pow(-1,i)*((pow(x,2*i+1))/(fact(2*i+1)));}
    return s;
}
double r_sin(double x,int i,double s)
{
    if(i>15){return s;}
    else s=s+pow(-1,i)*((pow(x,2*i+1))/(fact(2*i+1)));r_sin(x,i+1,s);
    return s;
}
int main()
{
    double i,r;
    double x,u;
    scanf("%lf",&x);
    x=(x*pi)/180;
    i=i_sin(x);
    printf("i=%lf\n",i);
    r=r_sin(x,0,0);
    printf("r=%lf",r);
    clock_t start,end;
    double cpu_time_used1,cpu_time_used2;
    start=clock();
    i=i_sin(x);
    end=clock();
    cpu_time_used1=((double)(end-start))/CLOCKS_PER_SEC;
    printf("the time used for iterative fun is%lf\n",cpu_time_used1);
    start=clock();
    r=r_sin(x,0,0);
    end=clock();
    cpu_time_used2=((double)(end-start))/CLOCKS_PER_SEC;
    printf("the time used for recursive fun is %lf",cpu_time_used2);
}