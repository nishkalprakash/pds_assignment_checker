/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>
int main()
{
 float Monthly_Salary,Annu_Salary,house_loan,life_insu,med_insu,x,y,tax;
 printf("Monthly Salary= \n");
 scanf("%f",&Monthly_Salary);
 printf("House Loan= \n");
 scanf("%f",&house_loan);
 printf("Life insurance premium= \n");
 scanf("%f",&life_insu);
 printf("Medical insurance=\n");
 scanf("%f",&med_insu);

 x=Monthly_Salary*12-house_loan-life_insu-med_insu;

  if(x>0&&x<=250000) tax=0;
  else if(x>250000&&x<=500000) tax=x*0.05;
  else if(x>500000&&x<=750000) tax=12500+0.1*x;
  else if(x>750000&&x<=1000000) tax=37500+0.15*x;
  else if(x>1000000&&x<=1250000) tax=75000+0.2*x;
  else if(x>1250000&&x<=1500000) tax=125000+0.25*x;
  else  tax=187500+0.3*x;

   printf("Tax is %f",tax);

   return 0;
   }
