//Roll_No.:23PH10013
//Name: Bhoomik Modi
#include <stdio.h>// Importing the header file

int main(){// creating main function
  float num;
  printf("Enter a Number : ");
  scanf("%f",&num);
  int num1=num;
  float num2=num-num1;
  printf("Integral part = %d\n",num1);// printing the integral part
  printf("Fractional part = %f\n",num2);// printing the fractional part
  return 0;
}
