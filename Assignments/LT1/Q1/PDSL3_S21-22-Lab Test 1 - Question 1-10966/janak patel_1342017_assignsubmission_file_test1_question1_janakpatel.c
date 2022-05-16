/*
name: Janak Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
Test 1 : Question 1
*/

#include<stdio.h>
int main (){

      float tax=0;
      float monthly_income;
      float net_income,loan,premium,medical;

      float profit; //taxable amount

      printf("enter your monthly_income :\n");
      scanf("%f",&monthly_income);

      printf("enter your loan amount :\n");
      scanf("%f",&loan);

       printf("enter your premium amount :\n");
      scanf("%f",&premium);

       printf("enter your medical insurance amount :\n");
      scanf("%f",&medical);

       net_income = monthly_income*12;



      profit = net_income - loan -premium-medical;



      if(profit>=250000 && profit <= 500000) {
        tax = tax + (profit-250000)*0.05 + 0;
        printf("your  tax is :%f\n",tax);
      }

      else if(profit>=500000 && profit <=750000) {
        tax = tax + (profit-500000)*0.10 + 12500;
        printf("your tax is :%f\n",tax);
      }


      else if(profit>=750000 && profit <=1000000) {
        tax = tax + (profit-750000)*0.15 +37500;
        printf("your  tax is :%f\n",tax);
      }


      else if(profit>=1000000 && profit <= 1250000) {
        tax = tax + (profit-1000000)*0.20 + 75000;
        printf("your tax is :%f\n",tax);
      }

      else if(profit>=1250000 && profit <= 1500000) {
        tax = tax + (profit-1250000)*0.25 + 125000;
        printf("your  tax is :%f\n",tax);
      }

      else if(profit>=1500000 ) {
        tax = tax + (profit-1500000)*0.30 + 187500;
        printf("your tax is :%f\n",tax);
      }

      else {
            tax = tax + (profit-250000)*0.00;
        printf("your profit is below 250000 so your tax is :%f \n",tax);
      }

      return 0;





}
