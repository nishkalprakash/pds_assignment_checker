#include <stdio.h>

int main()
{
    int monthly_sal, house_loan, life_ins, med_ins, total_tax, amount;

    printf("Input:\n");
    printf("Monthly Salary = ");
    scanf ("%d",&monthly_sal);
    printf("House Loan = ");
    scanf ("%d",&house_loan);
    printf("Life Insurance Premium = ");
    scanf ("%d",&life_ins);
    printf("Medical Insurance = ");
    scanf ("%d",&med_ins);

    if (monthly_sal*12 > 10e5)
    {
        amount = monthly_sal*12;

        if (house_loan > 25e4)
            amount -=25e4;
        else
            amount -= house_loan;

        if (life_ins > 15e4)
            amount -= 15e4;
        else
            amount -= life_ins;

        if (med_ins > 5e4)
            amount -= 5e4;
        else
            amount -= med_ins;
    }
    else
        amount = monthly_sal*12;

    if (amount >= 0 && amount <= 2.5e5)
        total_tax = 0;
    else if (amount > 2.5e5 && amount <= 5e5)
        total_tax = (amount-2.5e5)*(5/100.0);
    else if (amount > 5e5 && amount <= 7.5e5)
        total_tax = (amount-5e5)*(10/100.0) + 12500;
    else if (amount > 7.5e5 && amount <= 10e5)
        total_tax = (amount-7.5e5)*(15/100.0) + 37500;
    else if (amount > 10e5 && amount <= 12.5e5)
        total_tax = (amount-10e5)*(20/100.0) + 75000;
    else if (amount > 12.5e5 && amount <= 15e5)
        total_tax = (amount-12.5e5)*(25/100.0) + 125000;
    else
        total_tax = (amount-15e5)*(30/100.0) + 187000;

    printf("\nOutput:\n");
    printf("Total tax: %d",total_tax);

    return 0;
}
