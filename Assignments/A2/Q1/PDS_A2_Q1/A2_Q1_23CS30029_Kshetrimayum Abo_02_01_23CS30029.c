//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
int main()
{
  float number;
  printf("Enter a float number : "); /*Asking for a float number from the user*/
  scanf("%f",&number);
  printf("The integral part of the number %f is : %d\n",number,(int)number); /*Printing the integral part of the float by typecasting the float value into a integer value */
  printf("The fractional part of the number %f is : %0.5f\n",number,number - (int)number); /*Printing the decimal part of the number by first subtracting the float with only it's integral part */
  return 0;
}
