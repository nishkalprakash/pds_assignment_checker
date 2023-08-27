//name tanishq sura
//roll no 23Cs10071

#include<stdio.h>

int main(){
  float input_float,fractional_part;
  int integral_part;
  printf("give a floating point number:");
  scanf("%f",&input_float);//took a float input
  integral_part= input_float;//truncated it just by assigning it to an integer variable
  fractional_part= input_float - integral_part;// n=N+f
  printf("\nintegral part = %d\n", integral_part);
  printf("the fractional part = %f",fractional_part);
   
  return 0;

}
    
