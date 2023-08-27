//Roll No.: 23ME10044
//Name: Lalit Karthikeyan M A

#include <stdio.h>

int main(){

  int amt, yrs;
  float interest, payamt;

  printf("Enter the total amount \n");
  scanf("%d", &amt);

  printf("Enter the period of deposit in years \n");
  scanf("%d", &yrs);

  printf("Enter the interest rate \n");
  scanf("%f", &interest);

  payamt= amt+(amt*yrs*interest/100);

  printf("The payable amount is %f", payamt);

  return 0;

}

  

  
