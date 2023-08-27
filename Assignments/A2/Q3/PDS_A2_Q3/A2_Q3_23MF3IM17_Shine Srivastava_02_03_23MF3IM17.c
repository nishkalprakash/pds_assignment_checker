//ROLL NO: 23MF3IM17
//Name : Shine Srivastava

#include <stdio.h>
int main()
{
  unsigned int dep,per;
  float rate,amount,inter;
  
  printf("Enter amount deposited :\n");
  scanf("%d",&dep);
  
  printf("Enter the period\n");
  scanf("%d",&per);

  printf("Enter the interest rate:\n");
  scanf("%f",&rate);

  inter = (per * rate * dep)/100;
  amount = dep + inter;

  printf("The total amount payable : %f",amount);

  return 0;
}

  

  

  

  
  
  
  
