/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: Lab Test 1-Ques1
*/

#include<stdio.h>
#include<math.h>
 int main() {

     int month_salary,House_loan,LIP,Medi_insurance,Salary,Total_Inv,Tax_sal,Income_tax;
     printf("Enter month_salary:");
     scanf("%d",&month_salary);
     printf("Enter House_loan :");
     scanf("%d",&House_loan);
     printf("Enter Life insurance premium:");
     scanf("%d",&LIP);
     printf("Enter Medical Insurance :");
     scanf("%d",&Medi_insurance);

     if (House_loan>250000)
        House_loan=250000;
     else House_loan= House_loan;

     if (LIP>150000)
        LIP=150000;
     else LIP=LIP;

     if (Medi_insurance>50000)
        Medi_insurance=50000;
     else Medi_insurance = Medi_insurance;


     Salary = 12 * month_salary ;
     Total_Inv = House_loan + LIP + Medi_insurance ;
     if(Salary > 1000000)
     Tax_sal=Salary - Total_Inv;
     else Tax_sal = Salary ;
    // printf("%d",Tax_sal);

     if (Tax_sal<=250000)
        printf("Income Tax: NIL");

     else if (Tax_sal<=500000){
        Income_tax=0.05 * Tax_sal;
        printf("Income Tax: %d", Income_tax);
     }
     else if (Tax_sal<=750000){
        Income_tax= 12500 + 0.10*Tax_sal;
        printf("Income Tax: %d",Income_tax );
     }

     else if (Tax_sal<=1000000){
        Income_tax = 37500 + 0.15*Tax_sal;
        printf("Income Tax: %d",Income_tax  );
     }

     else if (Tax_sal<=1250000){
        Income_tax=75000 + 0.20*Tax_sal;
        printf("Income Tax: %d", Income_tax );
     }

     else if (Tax_sal<=1500000){
        Income_tax=125000 + 0.25*Tax_sal;
        printf("Income Tax: %d",Income_tax );
     }

     else{
        Income_tax =187500 + 0.25*Tax_sal;
        printf("Income Tax: %d",187500 + 0.25*Tax_sal );
         }

return 0;
 }
