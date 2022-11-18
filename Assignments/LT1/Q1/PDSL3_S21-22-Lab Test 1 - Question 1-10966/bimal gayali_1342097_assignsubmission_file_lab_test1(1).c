//NAME;BIMAL GAYALI
//ROLL;21MA10017
//SEC;3
//QOUESTION;1
#include<stdio.h>
int main()
{
    float income_monthly,income,tax_in,tax,Hloan,Lin,Min,inv;

    printf("enter the values resprctively as income_monthly ,Hloan,Lin,Min,inv ");
    scanf("%f\n %f\n %f\n %f\n",&income_monthly,&Hloan,&Lin,&Min);
    income=income_monthly*12;
    if(Hloan<=250000,Lin<=150000,Min<=50000,inv<=1000000)
    tax_in=income-Hloan-Min-Lin-inv;
    {
        if(tax_in<=250000&&tax_in>0)
            printf("tax=%f",0);
        else if(tax_in>=250001 && tax_in<=500000)
            printf("tax=%f",(tax_in*0.05));


        else if(tax_in>=500001 && tax_in<=750000)
            printf("tax=%f",12500+(tax_in*0.1));
        else if(tax_in>=750001 && tax_in<=1000000)
            printf("tax=%f",37500+(tax_in*0.15));

        else if(tax_in>=1000001 && tax_in<=1250000)
            printf("tax=%f",75000+(tax_in*0.2));


        else if(tax_in>=1250001 && tax_in<=1500000)
            printf("tax=%f",125000+(tax_in*0.25));

        else if(tax_in>=150001)
            printf("tax=%f",187500+(tax_in*0.3));

    }
    return 0;
}
