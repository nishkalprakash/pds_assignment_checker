/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include<stdio.h>
int main()
{
    int mon_sal, house_loan, li_prem, med_ins, year_sal;
    float tax;
    printf("Monthly salary = ");
    scanf("%d", &mon_sal);
    printf("House loan = ");
    scanf("%d", &house_loan);
    printf("Life insurance premium = ");
    scanf("%d", &li_prem);
    printf("Medical insurance = ");
    scanf("%d", &med_ins);
    year_sal = mon_sal * 12;
    if(house_loan > 250000){    // House loan investment can be upto Rs. 2,50,000 only
        house_loan = 250000;
    }
    if(li_prem > 150000){       // Life insurance premium investment can be upto Rs. 1,50,000 only
        li_prem = 150000;
    }
    if(med_ins > 50000){        // Medical insurance investment can be upto Rs. 50,000 only
        med_ins = 50000;
    }
    if(year_sal > 1000000){
        year_sal = year_sal - house_loan - li_prem - med_ins;
    }
    if(year_sal > 0 && year_sal <= 250000){
        tax = 0;
    }
    else if(year_sal <= 500000){
        tax = 0.05*year_sal;
    }
    else if(year_sal <= 750000){
        tax = 12500 + 0.1*(year_sal - 500000);
    }
    else if(year_sal <= 1000000){
        tax = 37500 + 0.15*(year_sal - 750000);
    }
    else if(year_sal <= 1250000){
        tax = 75000 + 0.2*(year_sal - 1000000);
    }
    else if(year_sal <= 1500000){
        tax = 125000 + 0.25*(year_sal - 1250000);
    }
    else{
        tax = 187500 + 0.3*(year_sal - 1500000);
    }
    printf("Total tax = %0.0f\n", tax);
    return 0;
}