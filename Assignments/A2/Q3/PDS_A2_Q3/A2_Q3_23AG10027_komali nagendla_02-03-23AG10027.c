#include<stdio.h>
int main()
{
  int a,b;
  float c;
  printf("Enter the amount being deposited");
  scanf("%d",&a);
  printf("Enter period of deposited in years");
  scanf("%d",&b);
  printf("Enter the interest rate");
  scanf("%f",&c);
  printf("The total payable amount at the end deposit period is:%f,(a+b)*c);  
  return 0;
}
