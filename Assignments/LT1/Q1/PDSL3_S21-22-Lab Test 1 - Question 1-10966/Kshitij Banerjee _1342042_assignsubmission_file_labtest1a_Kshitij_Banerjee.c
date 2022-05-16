// Name=Kshitij Banerjee
// Roll No=21CH10035
// Department=Chemical
// Package=Codeblocks
// OS=Windows11

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int salary, house, insurance, medical;
    float totaltax;

    printf("Enter salary = ");
    scanf("%d", &salary);

    printf("Enter house loan = ");
    scanf("%d", &house);

    printf("Enter life insurance premium = ");
    scanf("%d", &insurance);

    printf("Enter medical insurance = ");
    scanf("%d", &medical);

    int yearlysal = salary * 12;

    if (salary * 12 > 1000000)
    {
        yearlysal = salary * 12 - house - insurance - medical;
    }

    if (yearlysal <= 250000)
    {
        printf("Total tax = nil\n");
    }
    else if (yearlysal <= 500000)
    {
        totaltax = 0.05 * yearlysal;
    }
    else if (yearlysal <= 750000)
    {
        totaltax = 12500 + 0.10 * (yearlysal);
    }
    else if (yearlysal <= 1000000)
    {
        totaltax = 37500 + 0.15 * (yearlysal);
    }
    else if (yearlysal <= 1250000)
    {
        totaltax = 75000 + 0.2 * (yearlysal);
    }
    else if (yearlysal <= 1500000)
    {
        totaltax = 125000 + 0.25 * (yearlysal);
    }
    else
    {
        totaltax = 187500 + 0.30 * (yearlysal);
    }
    printf("Total tax = %0.3f\n", totaltax);
    return 0;
}
