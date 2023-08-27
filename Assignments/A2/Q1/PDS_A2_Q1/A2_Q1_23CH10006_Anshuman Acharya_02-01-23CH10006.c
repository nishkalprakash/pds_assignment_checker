//Roll No:23CH10006
//Name: Anshuman Acharya
#include<stdio.h>
int main()
{float a, c;
  int b;
  printf("Enter your floating point number\n");
  scanf("%f",&a);
  b = (int)a;                      //Typecasting
  c = a-b;
  printf("The greatest integer is %d\nThe fractional part is %f", b, c);
  return 0;}
  
