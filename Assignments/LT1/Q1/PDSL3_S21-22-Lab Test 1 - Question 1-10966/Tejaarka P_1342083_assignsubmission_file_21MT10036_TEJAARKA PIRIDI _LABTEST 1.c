/*TEJAARKA PIRIDI 21MT10036 LABTEST 1 QUESTION 1*/


#include<stdio.h>


int main()

{
 float month_sala,H_loan,L_I_P,M_I_P,ipa,tax;


 printf("Enter the monthly salary:");



 scanf("%f%f",&month_sala);


 printf("enter the H_loan,L_I_P,M_I_P:");



 scanf("%f%f",&H_loan,&L_I_P,&M_I_P);



 ipa==(month_sala*12)-(H_loan+L_I_P+M_I_P);


if (ipa<250000){tax=0;printf("income tax is zero\n");}



else if (ipa>250000&&ipa<500000)

{tax=0.05*(ipa-250000);}


else if (ipa>500000&&ipa<750000)

{tax=0.1*(ipa-500000)+12500;}


else if (ipa>750000&&ipa<1000000)

{tax=0.15*(ipa-750000)+37500;}


else if (ipa>1000000&&ipa<1250000)

{tax=0.2*(ipa-1000000)+75000;}


else if (ipa>1250000&&ipa<1500000)

{tax=0.25*(ipa-1250000)+125000;}



else if(ipa>1500000)

{tax=0.3*(ipa-1500000)+187500;}



printf("you have to pay tax=%d",tax);


return(0);

 }
