/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

int main()
{
    float s,hl,li,mi,t,i;
    printf("Monthly Salary = ");
    scanf("%f",&s);
    printf("House Loan = ");
    scanf("%f",&hl);
    printf("Life Insurance Premium = ");
    scanf("%f",&li);
    printf("Medical Insurance = ");
    scanf("%f",&mi);
    if (hl<=250000 && li<=150000 && mi<=50000)
    {
        i=(s*12)-hl-li-mi;
    }
    if (i<=250000.0)
    {
        t=0;
    }
    else if (i>250000.0 && i<=500000.0)
    {
        t=0.05*i;
    }
    else if (i>500000.0 && i<=750000.0)
    {
        t=12500.0+(0.1*i);
    }
    else if (i>750000.0 && i<=1000000.0)
    {
        t=37500.0+(0.15*i);
    }
    else if (i>1000000.0 && i<=1250000.0)
    {
        t=75000.0+(0.2*i);
    }
    else if (i>1250000.0 && i<=1500000.0)
    {
        t=125000.0+(0.25*i);
    }
    else
    {
        t=187500.0+(0.3*i);
    }
    printf("Total Tax: %0.0f",t);

    return 0;
}
