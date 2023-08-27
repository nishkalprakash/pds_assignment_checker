#include<stdio.h>
int main(){
  float num,f;
  int i;
  printf("Enter the number\n");
  scanf("%f", &num);
  printf("The num entered is %.3f\n",num);
  printf("The integer part of the number is: %d\n",(int)num);
  printf("The fractional part is: %.3f\n",num-(int)num);
  return 0;
}
