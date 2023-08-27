#include<stdio.h>

int main(){
  float  a;
  printf("this program is to give a integer part and fractional part separately \n");
  printf("enter the number \n");
  scanf("%f",&a);
  int b = ((int) a)*1;
  printf("the integer part is %d \n", b);
  float c = a - (b*1.0);
  printf("the fractional part is %.3f \n",c);
  return 0;
}
