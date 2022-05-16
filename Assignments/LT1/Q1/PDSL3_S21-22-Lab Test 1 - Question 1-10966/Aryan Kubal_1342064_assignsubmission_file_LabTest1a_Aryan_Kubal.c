/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
      int salary, house_loan, life_premium, med_ins;
      int total_salary, taxable_amt;
      int tax;

      printf("Enter your monthly salary:  "); 
      scanf("%d", &salary); // getting the input of the user for monthly salary
      printf("Enter your yearly house loan if any othwerwise enter 0: "); 
      scanf("%d", &house_loan); // getting the input for house loan 
      printf("Enter life insurance if any othwerwise enter 0: "); 
      scanf("%d", &life_premium); // getting the input for life insurance premium
      printf("Enter the medical insurance if any otherwise enter 0: "); 
      scanf("%d", &med_ins); // // getting the input for medical insurance premium

        total_salary=12*salary; // calculating the annual salary

// calculating the tax
        if(total_salary>=1000000)
        {
            if(house_loan<=250000)taxable_amt= total_salary -(house_loan );

            else taxable_amt= total_salary - 250000;

            if(life_premium<=150000) taxable_amt=taxable_amt-life_premium;

            else taxable_amt=taxable_amt-150000;

            if(med_ins<=50000) taxable_amt= taxable_amt-med_ins;
            else taxable_amt=taxable_amt-50000;\
        }
        else taxable_amt=total_salary;

        if(taxable_amt>=0 && taxable_amt<=250000) tax=0;
        else if(taxable_amt>=250001 && taxable_amt<=500000) tax= ((5*taxable_amt)/100);
        else if(taxable_amt>=500001 && taxable_amt<=750000) tax= 12500 + ((10*taxable_amt)/100);
        else if(taxable_amt>=750001 && taxable_amt<=1000000) tax= 37500 + ((15*taxable_amt)/100);
        else if(taxable_amt>=1000001 && taxable_amt<=1250000) tax= 75000 + ((20*taxable_amt)/100);
        else if(taxable_amt>=1250001 && taxable_amt<=1500000) tax= 125000 + ((25*taxable_amt)/100);
        else if(taxable_amt>1500000) tax=187500 + ((30*taxable_amt)/100);

        printf("Total tax is: %d", tax); // printing the final output

return 0;
}

