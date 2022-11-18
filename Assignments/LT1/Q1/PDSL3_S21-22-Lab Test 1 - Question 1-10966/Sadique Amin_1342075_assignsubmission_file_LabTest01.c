/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/

#include <stdio.h>

int main()
{
    int sal,hloan,lip,mi,ysal,t,tax;
    printf("Input: ");
    scanf("Monthly salary = %d, house loan = %d, life insurance premium = %d, medical insurance = %d",&sal,&hloan,&lip,&mi);
    ysal=sal*12;
    if(hloan>250000)
    {
        hloan=250000;
    }
    if(lip>150000)
    {
        lip=150000;
    }
    if(mi>50000)
    {
        mi=50000;
    }
    t=ysal;
    if(ysal>1000000)
    {
        t=ysal-(hloan+lip+mi);
    }
    if(t>=0 && t<=250000)
    {
        tax=0;
    }
    else if (t>=250001 && t<=500000)
    {
        tax=0.5*t;
    }
    else if (t>=500001 && t<=750000)
    {
        tax=12500+0.1*(ysal-500000);
    }
    else if (t>=750001 && t<=1000000)
    {
        tax=37500+0.15*(ysal-750000);
    }
    else if (t>=1000001 && t<=1250000)
    {
        tax=75000+0.2*(ysal-1000000);
    }
    else if (t>=1250001 && t<=1500000)
    {
        tax=125000+0.25*(ysal-1250000);
    }
    else if(t>=1500001)
    {
        tax=187500+0.3*(ysal-1500000);
    }
    printf("Total Tax: %d",tax);
}