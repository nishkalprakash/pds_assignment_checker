//Roll No.:23IM30025
//Name: Shreyash Girdhari Dhakate
#include<stdio.h>
int main() {
  float a;// defining a as a float number
  printf("Enter the Number:");// taking user input 
  scanf("%f",&a);
  int b= (int)a;
  //calculation part
  printf("Integral part is: %d \n",b);
  printf("Fractional part is:%0.3f \n",a-b);
  return 0;
}
