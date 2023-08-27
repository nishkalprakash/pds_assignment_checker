//Roll No.:23MF3IM17
//NAME : Shine Srivastava


#include <stdio.h>
int main()
{
  float num1,num3;
  int num2;
  printf("Enter a floating point number:\n");
  scanf("%f",&num1);
  num2=(int)num1;
  num3=num1-(float)num2;
  printf("Integral Part = %d\n",num2);
  printf("Fractional Part = %f\n",num3);

  return 0;
}
  
  
  
