/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
#include <string.h>

int main()
{
    int ms,hl,ip,mi,ti,tax;
    printf("Monthly Salary= ");
    scanf("%d",&ms);
    printf("House Loan= ");
    scanf("%d",&hl);
    printf("Insurance Premium= ");
    scanf("%d",&ip);
    printf("Medical Insurance= ");
    scanf("%d",&mi);
    ti=ms*12;
    if(ti>=1000000)
    {
        if(hl>250000)
        ti=ti-250000;
        else
        ti=ti-hl;
        if(ip>150000)
        ti=ti-150000;
        else
        ti=ti-ip;
        if(mi>50000)
        ti=ti-50000;
        else
        ti=ti-mi;
    }
    if(ti>1500000)
    tax=187500+0.3*(ti-1500000);
    else
    if(ti>1250000)
    tax=125000+0.25*(ti-1250000);
    else
    if(ti>1000000)
    tax=75000+0.20*(ti-1000000);
    else
    if(ti>750000)
    tax=37500+0.15*(ti-750000);
    else
    if(ti>500000)
    tax=12500+0.1*(ti-500000);
    else
    if(ti>250000)
    tax=0.05*(ti-250000);
    else
    tax=0;

    printf("Total Tax= %d", tax);
    printf("\n");
    
    return 0;
}