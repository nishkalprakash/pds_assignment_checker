//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  float num, fraction = 0.0;                   //  Initiallising variables
  int integer = 0;
  printf("Enter a floating point number\n");
  scanf("%f", &num);
  integer = (int)num;    // Extracting integral value from entered number
  fraction = num-(float)integer; // Extracting decimal value from entered number
  printf("Integral part = %d\n",integer);
  printf("Fraction part = %1.5f\n",fraction);
  return 0;
}
  
  
