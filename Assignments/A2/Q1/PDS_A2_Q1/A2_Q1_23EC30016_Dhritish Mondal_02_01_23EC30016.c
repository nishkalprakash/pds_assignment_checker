#include<stdio.h>
int main()
{
  float num;
printf("Enter a number\n");
scanf("%f",&num);
 printf("Integer part of number is %d",(int)num);
 printf("Fractional part is %.3f",num-(int)num);
return 0;
 
}
