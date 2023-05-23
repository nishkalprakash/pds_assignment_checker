/*
Section 2
22ME10034
Hindvee Rajesh Vispute
Assignment no. 1
*/

#include<stdio.h>
#include<time.h>
/* global variable declaration*/
long f = 1;
int i = 0;
double sum = 0;


/*recursive function to find factorial*/
int fact(int n)
{

    if(n==1)
        return 1;
    else
    {
        f = f*n*fact(n-1);
    }
    return f;
}


/*recursive function to find pow*/
float pow(float x,int n)
{
    float t;
    if(n == 0)
        return x;
    else
    {
        t = x*pow(x, n-1);
    }
    return t;
}

/*recursive function to calculate sin*/
double r_sin(double x)
{
    double sum;
    double t = 0;

    if(i==10)
    {
        return sum;
    }
    else
    {
        t = pow(-1, i+1)*pow(x, i)/fact(i);
        i = i +2;
        sum = sum + t + r_sin(x);
    }
    printf("%lf", sum );
}

/*iterative function to find sin*/
double i_sin(double x)
{
    int k, j=0;
    int t = 1;
    for(k = 0; k<10; k++)
    {
        int y;
        y = k;
        while(j!=k)
        {
            t = (-1)*t*x/y;
            y--;
            t = t*(-1);
        }
        sum = sum + t;
    }
    return sum;
    printf("%lf, ", sum );
}



int main()
{
    double x1;
    printf("Enter a no.");
    scanf("%lf", &x1);

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    i_sin(x1);
    r_sin(x1);
    end = clock();
    cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
}
