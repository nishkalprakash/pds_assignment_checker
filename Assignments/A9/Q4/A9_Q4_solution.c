// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to calc basic pay of employees using struct

#include <stdio.h>

typedef struct
{
    int BP, wages, days;
    float HRA, TA;
} details;

void netPay(details d)
{
    d.BP = d.wages * d.days;
    if (d.BP < 1000)
        d.HRA = (0.12) * d.BP;
    else
        d.HRA = (0.20) * d.BP;

    if (d.days > 19)
        d.TA = (0.10) * d.BP;
    else
        d.TA = 0;

    printf("Net Pay : %f", d.BP + d.HRA + d.TA);
}

int main()
{
    int N; // N = Number of Employees
    int i; // Loop Variable
    printf("Enter the number of employees : ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        details d;
        char name[100];
        printf("Name wages days : ");
        printf("\n");
        scanf("%s %d %d", name, &d.wages, &d.days);

        netPay(d);
        printf("\n");
    }
}
