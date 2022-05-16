/* Shruti Srivastava
   21EE30025
   Electrical Engg. Dual Degree
   Code Blocks
   Windows 10
   Section 03 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   int income, moninc;
   int tax,hloan,lip,mi;
   int inv;
   printf("Monthly salary:- \n");
   scanf("%d",&moninc);
   income = 12*moninc;
   printf("House loan:- \n");
   scanf("%d",&hloan);
   if(hloan>250000){
    hloan=250000;
   }
   printf("life insurance premium:- \n");
   scanf("%d",&lip);
   if(lip>150000){
    lip=150000;
   }
   printf("medical insurance:- \n");
   scanf("%d",&mi);
   if(mi>50000){
    mi=50000;
   }
   income = income-(hloan+lip+mi);
   if((income>=0)&&(income<=250000)){
     tax= 0;
   }else if((income>=250001)&&(income<=500000)){
     tax= 0.05*income;
   }else if((income>=500001)&&(income<=750000)){
     tax = 0.1*income + 12500;
   }else if((income>=750001)&&(income<=1000000)){
     tax = 0.15*income + 37500;
   }else if((income>=1000001)&&(income<=1250000)){
     tax = 0.2*income + 75000;
   }else if((income>=1250001)&&(income<=1500000)){
     tax = 0.25*income + 125000;
   }else if((income>=1500001)){
     tax = 0.30*income + 187500;
   }
   printf("Total Tax:- %d\n",tax);

   return 0;

}
