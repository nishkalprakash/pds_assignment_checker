/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float ms, hl, li, mi, ys;
    printf("Monthly salary = ");
    scanf("%f", &ms);
    printf("House loan = ");
    scanf("%f", &hl);
    printf("Life insurance premium = ");
    scanf("%f", &li);
    printf("Medical insurance = ");
    scanf("%f", &mi);
    ys = ms*12;
    if(ys >= 1000000)
    {
        if(hl<=250000)
        ys = ys-hl;
        else
        ys = ys -250000;
        if(li<=150000)
        ys= ys-li;
        else
        ys = ys-150000;
        if(mi<=50000)
        ys=ys-mi;
        else
        ys = ys-50000;
    }
    float tax;
    if(ys<=250000) printf("Total Tax: Nil");
    else if ((ys>=250001) && (ys<=500000))
    {
        tax = 0.05*ys;
        printf("Total tax: %f", tax);
    }
    else if (ys>=500001 && ys<=750000)
    {
        tax = 12500 + (0.1)*(ys);
        printf("Total tax: %f", tax);
    }
    else if (ys>=750001 && ys<=1000000)
    {
        tax =  37500 + (0.15)*(ys);
        printf("Total tax: %f", tax);
    }
    else if (ys>=1000001 && ys<=1250000)
    {
        tax = 75000 + (0.20)*(ys);
        printf("Total tax: %f", tax);
    }
    else if (ys>=1250001 && ys<=1500000)
    {
        tax = 125000 + (0.25)*(ys);
        printf("Total tax: %f", tax);
    }
    else if(ys>1500000)
    {
        tax = 187500 +(0.3)*(ys);
        printf("Total tax: %f", tax);
    }
    return 0;
}

    
    