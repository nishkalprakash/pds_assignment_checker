#include<stdio.h>
int main(){
  float num;
  printf("the number : ");
  scanf("%f",&num);
  int integral= num;
  float  decimal;
  decimal=num-integral;
  printf("the integral part is : %d \n", integral);
  printf("the decimal part is : %f", decimal);

  return 0;

}
