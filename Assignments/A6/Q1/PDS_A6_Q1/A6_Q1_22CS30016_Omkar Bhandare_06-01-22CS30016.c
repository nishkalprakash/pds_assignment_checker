/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 06
Description -
*/
#include<stdio.h>
#include<time.h>

int maxterms = 30;

long long int fact(int n)
{
    if(n==0) return 1;
    else return n*fact(n-1);
}

float pow(float x, int n)
{
    if(n==0) return 1;
    else return x*pow(x,n-1);
}

double i_sin(double x)
{
    double sum = 0;
    int i;
    for(i=0; i<30 ; i++)
    {
        sum = sum + (pow(-1,i)*pow(x,(2*i+1)))/fact(2*i+1);
    }
    return sum;
}

double r_sin(double x)
{
    if(maxterms==0) return x;
    else
    {
        maxterms--;
        return (pow(-1,maxterms+1)*pow(x,(2*(maxterms+1)+1))) / fact(2*(maxterms+1)+1) + r_sin(x);
    }
}

int main()
{
    double x;
    scanf("%lf", &x);
    x = (x * 3.1415926535)/180;
    printf("%lf  %lf", i_sin(x), r_sin(x));
    printf("\n");
    printf("Difference in CPU times : ");

    double iterative, recursive;
    clock_t start,end;

    start = clock();
    i_sin(x);
    end = clock();
    iterative = ((double) (end-start));

    start = clock();
    r_sin(x);
    end = clock();
    recursive = ((double) (end-start));

    printf("%lf  %lf", iterative, recursive);
    return 0;
}
