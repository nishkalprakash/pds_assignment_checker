/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Lab Test: 1(a)
*/

#include <stdio.h>
int main()
{
    printf("Enter monthly salary, house loan, life insurance, medical insurance.\n");
    int sal,loan,li,mi;
    scanf("%d %d %d %d",&sal,&loan,&li,&mi);
    sal=sal*12;
    if(loan<250000)
        sal=sal-loan;
    else
        sal=sal-250000;
    if(li<150000)
        sal=sal-li;
    else
        sal=sal-150000;
    if(mi<50000)
        sal=sal-mi;
    else
        sal=sal-50000;
    int t;
    if(sal<=250000)
        t=0;
    else if(sal<=500000)
        t=0.05*sal;
    else if(sal<=750000)
        t=12500+0.1*sal;
    else if(sal<=1000000)
        t=37500+0.15*sal;
    else if(sal<=1250000)
        t=75000+0.2*sal;
    else if(sal<=1500000)
        t=125000+0.25*sal;
    else
        t=187500+0.3*sal;
    printf("Tax = %d",t);
}
