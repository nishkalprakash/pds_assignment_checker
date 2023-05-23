#include <stdio.h>
#define pi 3.1415926535
#include <time.h>

int term=0;
int i=0;
int n1=10;

long int fact(int x)
{
    int y=1;
    for (int i=2;i<=x;i++)
    {
        y=y*i;
    }
    return y;
}

float pow(float x,int n)
{
    if (n==1) return x;
    return x*(pow(x,n-1));
}

double i_sin(double x)
{
    double value=x;
    for (int j=1;j<=10;j++)
    {
        value = value + ((pow(-1,j))*pow(x,(2*j)+1))/fact((2*j) + 1);
    }
    return value;
}

double r_sin(double x)
{
    if (n1==0) return term;
    term += ((pow(-1,i))*pow(x,(2*i)+1))/fact((2*i) + 1);
    i++;
    n1--;
    r_sin(x);
}


int main()
{
    double n;
    scanf("%lf",&n);
    n=n*(pi/180);
    clock_t i_start,i_end;
    double i_cputime,r_cputime;
    i_start=clock();
    double x=i_sin(n);
    i_end=clock();
    i_cputime=((double)(i_end - i_start))/CLOCKS_PER_SEC;

    clock_t r_start , r_end;
    r_start=clock();
    double y=i_sin(n);
    r_end=clock();
    r_cputime=((double)(r_end - r_start))/CLOCKS_PER_SEC;

    double diff=(i_cputime)-(r_cputime);
    if (diff<0) diff=diff*(-1);

    printf("%lf , %lf \n",x,y);
    printf("%lf",diff);
    printf("\n\n");
    return 0;

}
