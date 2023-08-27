#include<stdio.h>

int main()
{
  int age;
  int month;
  
  printf("Enter the age in months   \n");
  scanf("%d",&month);
  
  age = month / 12;
  
  printf("age in years %d",age);
    //printf("Integer part of a number is %d",(int)num);
  return 0;
}
