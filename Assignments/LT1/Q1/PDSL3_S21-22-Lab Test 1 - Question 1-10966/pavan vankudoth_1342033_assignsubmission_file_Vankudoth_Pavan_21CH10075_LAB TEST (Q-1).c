/*
Name : Vankudoth Pavan
Department : Chemical Engineering
Roll No : 21CH10075
Package : Code blocks
Operating system : Windows
*/
#include<stdio.h>
int main()
{
    int monthlyincome,yearlyincome,tax;
    printf("monthly income\n");
    scanf("%d",&monthlyincome);
    yearlyincome=(monthlyincome*12)-450000;
    if(yearlyincome<250000){tax=0;
    printf("dont need to pay tax\n");}
    else if (yearlyincome>250000&&yearlyincome<500000)
    {
        tax=0.05*(yearlyincome-250000);}
        else if (yearlyincome>750000&&yearlyincome<1000000)
        {
            tax=0.15*(yearlyincome-750000)+37500;}
            else if (yearlyincome>500000&&yearlyincome<750000)
            {
                tax=0.1*(yearlyincome-500000)+12500;}
                else if (yearlyincome>1000000&&yearlyincome<1250000)
                {
                    tax=0.2*(yearlyincome-1000000)+75000;}
                    else if (yearlyincome>1250000&&yearlyincome<1500000)
                    {
                        tax=0.25*(yearlyincome-1250000)+125000;}
                        else if(yearlyincome>1500000)
                        {

                            tax=0.3*(yearlyincome-1500000)+187500;}
                            printf("need to pay tax=%d",tax);
                            return(0);






}
