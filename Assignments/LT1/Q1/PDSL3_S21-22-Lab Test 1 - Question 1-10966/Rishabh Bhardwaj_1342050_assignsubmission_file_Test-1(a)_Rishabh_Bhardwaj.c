/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>
#include<math.h>

int main(void)
{
    double x, y, z, n, t, T ,t1, t2, t3, t4, t5, t6;

    printf("Monthly income = ");
    scanf("%lf", &x);

    printf("House Loan = ");
    scanf("%lf", &y);

    printf("Life insurance premium = ");
    scanf("%lf", &z);

    printf("Medical insurance premium = ");
    scanf("%lf", &n);

    t = 12*x;
    T = t - y - z - n;

    if( T >= 0 && T <=250000 )
    {
        printf("Total tax: NIL\n");
    }
    else if(T > 250000 && T <= 500000)
    {
        t1 = 0.05 * T;
        printf("Total Tax: %f", t1);
    }
    else if (T > 500000 && T <= 750000)
    {
        t2 = 12500 + (0.1 * T);
        printf("Total Tax: %f", t2);
    }
    else if ( T > 750000 && T <= 1000000)
    {
        t3 = 37500 + (0.15 * T);
        printf("Total Tax: %f", t3);
    }
    else if (T > 1000000 && T <= 1250000)
    {
        t4 = 75000 + (0.2 * T);
        printf("Total Tax: %f", t4);
    }
    else if ( T > 1250000 && T <= 1500000)
    {
        t5 = 125000 + (0.25 * T);
        printf("Total Tax: %f", t5);
    }
    else if (T > 1500000)
    {
        t6 = 187500 + ( 0.35 * T);
        printf("Total Tax: %f", t6);
    }
    printf("\n");
    return 0;



}
