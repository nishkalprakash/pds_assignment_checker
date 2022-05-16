/*
name -sumedh deshkar
roll no.- 21MI33023
section-3
*/

#include<stdio.h>
int main()
{
    int tax = 0, income, salary;
    int loan, life, med;

    printf (" Monthly Salary : ");
    scanf ("%d", &salary);

    printf ("\n house loan : ");
    scanf ("%d", &loan);

    printf ("\n life insurance premium : ");
    scanf ("%d", &life);

    printf ("\n Medical Insurance : ");
    scanf ("%d", &med);

    if (loan >= 250000){
        loan = 250000;
    }

    if (life >= 150000){
        life = 150000;
    }

    if (med >= 50000){
        med = 50000;
    }

    income = salary*12 -loan - life -med;


    if (income >= 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }

    if (income >= 500000 && income <= 750000)
    {
        tax = 12500 + 0.10 * (income - 500000);
    }

    if (income >= 750000 && income <= 1000000)
    {
        tax = 37500 + 0.15 * (income - 750000);
    }

    if (income >= 1000000 && income <= 1250000)
    {
        tax = 75000 + 0.20 * (income - 1000000);
    }

    if (income >= 1250000 && income <= 1500000)
    {
        tax = 125000 + 0.25 * (income - 1250000);
    }

    if (income >= 1500000)
    {
        tax = 187500 + 0.30 * (income - 1500000);
    }

    printf ("Total Tax %d \n", tax);

    return 0;
}
