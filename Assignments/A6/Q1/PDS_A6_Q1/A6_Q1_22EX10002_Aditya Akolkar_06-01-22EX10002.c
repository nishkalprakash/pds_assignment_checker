#include <stdio.h>
#define PI 3.1415926535
#include <time.h>

long int fact(int n)
{
    int y;
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}

int pow(float x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return x*pow(x,n-1);
    }

}

double i_sin(double x)
{
    int j;

    double x1 = x*(3.1415926535/180);
    double sin_x = x1;
    for(j=1; j<=100; j++)
    {
        sin_x += pow(-1, j)*(pow(x1, 2)/fact(2j+1));
    }
    return (float)sin_x;
}

double r_sin(double x)
{
    int j;

    double x1 = x*(3.1415926535/180);
    double sin_x = x1;
    for(j=1; j<=100; j++)
    {
        sin_x += pow(-1, j)*(pow(x1, 2)/fact(2j+1));
    }
    return (float)sin_x;
    /*double x = x1*(3.1415926535/180);
    if (k=0)
        return x;
    else
        return (pow(-1,k)*pow(x,2*k+1)/fact(2*k + 1)) + r_sin(x, k-1);*/
}



int main()
{
    double x;
    scanf("%lf", &x);
    printf("%.6f, %.6lf \n", i_sin(x), r_sin(x));

    clock_t start, end;
    double cpu_time_used;

    start= clock();
    i_sin(x);
    r_sin(x);
    end = clock();
    cpu_time_used =((double) (end -start)) / CLOCKS_PER_SEC;
    printf("%lf", cpu_time_used);
}
