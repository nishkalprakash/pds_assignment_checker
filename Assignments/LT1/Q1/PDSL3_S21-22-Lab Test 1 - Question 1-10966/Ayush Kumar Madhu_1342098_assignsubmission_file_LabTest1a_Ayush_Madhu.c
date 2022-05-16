// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT. - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>
#include <math.h>

int main()
{
float month,HL,LIP,MI,TAX,NTI,AS;
printf("Monthly Salary : ");
scanf("%f",&month);
printf("House Loan : ");
scanf("%f",&HL);
printf("Life Insurance Premium : ");
scanf("%f",&LIP);
printf("Medical Insurance : ");
scanf("%f",&MI);
AS=12*scanf("%f",&month);
;
printf ("anual salary-%f",AS);
if (HL<=250000){
            AS=AS-HL;
        }
        else{

            AS=AS-250000;
        }
if (LIP<=150000){
            AS=AS-LIP;
        }
        else{

            AS=AS-150000;
        }

if (MI<=50000){
            AS=AS-MI;
        }
        else{

            AS=AS-50000;
        }

printf("\nYOUR NET TAXABLE INCOME IS %f\n",AS);
NTI=AS;
if (NTI>=0&&NTI<=250000){
    TAX=0;
}
if (NTI>250000&&NTI<=500000){
    TAX=0.05*NTI;
}
if (NTI>500000&&NTI<=750000){
    TAX=12500+(0.1*(NTI-500000));
}
if (NTI>750000&&NTI<=1000000){
    TAX=37500+(0.15*(NTI-750000));
}
if (NTI>1000000&&NTI<=1250000){
    TAX=75000+(0.2*(NTI-1000000));
}
if (NTI>1250000&&NTI<=1500000){
    TAX=125000+(0.25*(NTI-1250000));
}
if (NTI>1500000){
    TAX=187500+(0.3*(NTI-1500000));
}
printf("\n total tax-%f",TAX);
return 0;
}