#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mos, hol, lfin, mein;
    printf("Enter Monthly Salary:");
    scanf("%d", &mos);
    printf("Enter houseloan:");
    scanf("%d", &hol);
    printf("Enter life insurance premium:");
    scanf("%d", &lfin);
    printf("Enter medical insurance:");
    scanf("%d", &mein);
    int y = mos * 12 - hol - lfin - mein, tax = 0;
    if (y <= 250000)
    {
        printf("Total Tax = %d", tax);
    }
    else if (y > 250000 && y <= 500000)
    {
        printf("Total Tax = %d", 5 * tax / 100);
    }
    else if (y > 500000 && y <= 750000)
    {
        printf("Total Tax = %d", (12500 + 10 * (y - 500000) / 100));
    }
    else if (y > 750000 && y <= 1000000)
    {
        printf("Total Tax = %d", (37500 + 15 * (y - 750000) / 100));
    }
    else if (y > 1000000 && y <= 1250000)
    {
        printf("Total Tax = %d", (75000 + 20 * (y - 1000000) / 100));
    }
    else if (y > 1250000 && y <= 1500000)
    {
        printf("Total Tax = %d", (125000 + 25 * (y - 1250000) / 100));
    }
    else if (y > 1500000)
    {
        printf("Total Tax = %d", (187500 - 30 * (y - 1500000) / 100));
    }
    return 0;
}
