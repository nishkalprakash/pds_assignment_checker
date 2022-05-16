/*
Anindita Malviya
21MI33004
Section3
Code blocks
Assignment 2 a
*/

#include <stdio.h>

int main()
{
    long int salary,house,life,medical,t_tax,total;
    printf("Monthly Salary: ");
    scanf("%ld",&salary);
    printf("house loan= ");
    scanf("%ld",&house);
    printf("life insurance premium= ");
    scanf("%ld",&life);
    printf("medical insurance= ");
    scanf("%ld",&medical);
    long int yearly = salary*12;

    if (yearly > 1000000)
    {
        total = yearly - house - life - medical;
    }
    else
    {
        total = yearly;
    }
    if (total < 250000 && total >0)
    {
        t_tax = 0;
    }
    else if (total < 500000 && total > 250000)
    {
        t_tax = 0.05*total;
    }
    else if (total < 750000 && total > 500000)
    {
        t_tax = 12500 + 0.1*total;
    }
    else if (total < 1000000 && total > 750000)
    {
        t_tax = 37500 + 0.15*total;
    }
    else if (total < 1250000 && total > 1000000)
    {
        t_tax = 75000 + 0.2*total;
    }
    else if (total < 1500000 && total > 1250000)
    {
        t_tax = 125000 + 0.25*total;
    }
    else if (total > 1500000)
    {
        t_tax = 187500 + 0.3*total;
    }
    else
    {
        printf("Enter valid details\n");
    }

    printf("Total tax: %ld",t_tax);


}
