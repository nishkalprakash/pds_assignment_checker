#include <stdio.h>
#include <time.h>
double i_sin(double);
double r_sin(double,int,int);
void main()
{
    clock_t s,e;
    double t,x,s_i,r_i;
    int y;
    printf("enter a angle:  ");
    scanf("%lf",x);
    x=x*3.14/180.0;

    s=clock();
    s_i=i_sin(x);
    e=clock();
    t=((double)(e-s))/CLOCKS_PER_SEC;
    printf("\n sin x= %lf",s_i," in iterative function");
    printf("\n time used in iterative function= %lf",t);

    s=clock();
    r_i=r_sin(x,10,0);
    e=clock();
    t=((double)(e-s))/CLOCKS_PER_SEC;
    printf("\n sin x= %lf",s_i," in recursive function");
    printf("\n time used in recursive function= %lf",t);
}

int fact(int n)
{
    if(n==0)
        return 1;
    return (n*fact(n-1));
}

float pow(float x,int n)
{
    if(n==0)
        return 1;
    return (x*pow(x,n-1));
}

double i_sin(double x)
{
    double s,p;
    int i,f;
    for(i=0;i<=10;i++)
    {
        f=fact(2*i +1);
        p=pow(x,i);
        if(i%2==0)
            s=s+ p/f;
        else
            s=s-p/f;
    }
    return s;
}

double r_sin(double x,int n,int k)
{
    double s,p;
    int i=0,f;
    if(n==0)
        return 0.0;
    i=2*(k)+1;
    f=fact(i);
    p=pow(x,i);
    if(i%2==0)
        s=r_sin(x,n-1,k++)+ ((double)p)/f;
    else
        s=r_sin(x,n-1,k++)-((double)p)/f;
    return s;
}

