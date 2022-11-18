// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Test 1

#include<stdio.h>

int main()
{
    float mon_sal, yea_sal, taxable_sal1, taxable_sal2, taxable_sal3, tot_tax, hl, li, mi;

    printf("Monthly Salary = ");
    scanf("%f", &mon_sal);
    printf("House Loan = ");
    scanf("%f", &hl);
    printf("Life Insurance Premium = ");
    scanf("%f", &li);
    printf("Medical Insurance = ");
    scanf("%f", &mi);

    yea_sal = mon_sal*12;

    //CALCULATING TAXABLE SALARY

    if (hl <= 250000)
    {
        taxable_sal1 = yea_sal - hl;
    }
    else if (hl > 250000)
    {
        taxable_sal1 = yea_sal - 250000;
    }

    if (li <= 150000)
    {
        taxable_sal2 = taxable_sal1 - li; 
    }
    else if (li > 150000)
    {
        taxable_sal2 = taxable_sal1 - 150000;
    }

    if (mi <= 50000)
    {
        taxable_sal3 = taxable_sal2 - mi;
    }
    else if (mi > 50000)
    {
        taxable_sal3 = taxable_sal2 - 50000;
    }

    // CALCULATING TOTAL TAX

    if (taxable_sal3>=0 && taxable_sal3<250000)
    {
        tot_tax = 0;
        printf("\nTotal Tax: %f", tot_tax);
    }
    else if (taxable_sal3>=250001 && taxable_sal3<=500000)
    {
        tot_tax = taxable_sal3*(5.0/100);
        printf("\nTotal Tax: %f", tot_tax);
    }
    else if (taxable_sal3>=500001 && taxable_sal3<=750000)
    {
        tot_tax = taxable_sal3*(10.0/100) + 12500;
        printf("\nTotal Tax: %f", tot_tax);
    }
    else if (taxable_sal3>=750001 && taxable_sal3<=1000000)
    {
        tot_tax = taxable_sal3*(15.0/100) + 37500;
        printf("\nTotal Tax: %f", tot_tax);
    }
    else if (taxable_sal3>=1000001 && taxable_sal3<=1250000)
    {
        tot_tax = taxable_sal3*(20.0/100) + 75000;
        printf("\nTotal Tax: %f", tot_tax);
    }
    else if (taxable_sal3>=1250001 && taxable_sal3<=1500000)
    {
        tot_tax = taxable_sal3*(25.0/100) + 125000;
        printf("\nTotal Tax: %f", tot_tax);
    }
    else if (taxable_sal3>1500000)
    {
        tot_tax = taxable_sal3*(30.0/100) + 187500;
        printf("\nTotal Tax: %f", tot_tax);
    }

    return 0;
}
