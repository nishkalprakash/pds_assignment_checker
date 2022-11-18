/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int salary,insurance,hloan,medical;
    float tax=0;
    printf("Enter monthy salary : ");
    scanf("%d",&salary);
    printf("\nEnter house loan : ");
    scanf("%d",&hloan);
    printf("\nEnter life insurance premium : ");
    scanf("%d",&insurance);
    printf("\nEnter medical insurance : ");
    scanf("%d",&medical);

    salary *= 12;

    if (hloan>250000)
    {
        hloan = 250000;
    }
    if (insurance>150000)
    {
        insurance = 150000;
    }
    if (medical>50000)
    {
        medical = 50000;
    }

    salary = salary - medical - hloan - insurance;

    if (salary>250000)
    {
        if (salary>500000)
        {
            if (salary>750000)
            {
                if (salary>1000000)
                {
                    if (salary>1250000)
                    {
                        if (salary>1500000)
                        {
                            tax = salary*0.3+ 187500;
                        }
                        else
                        {
                            tax = salary*0.25+ 125000;
                        }
                    }
                    else
                    {
                        tax = salary*0.2+ 75000;
                    }
                }
                else
                {
                    tax = salary*0.15+ 37500;
                }
            }
            else
            {
                tax = salary*0.1+ 12500;
            }
        }
        else
        {
            tax = salary*0.05;
        }
    }
    printf("Total tax : %f\n",tax);
    return 0;
}
