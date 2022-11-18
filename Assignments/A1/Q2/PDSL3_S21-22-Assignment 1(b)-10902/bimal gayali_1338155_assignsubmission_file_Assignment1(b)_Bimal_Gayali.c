
/*************************
*Section:3
*Roll No:21MA10017
*Name:Bimal Gayali
*Week:2
*Assignment No:1b

*******/
#include<stdio.h>
 int main()
{
int x,reverse=0,remainder;
printf("enter a number:");
scanf("%d",&x);
  while(x!=0)
  {
     remainder=x%10;
     reverse=reverse*10+remainder;
     x/=10;
  }
  printf("Reverse number:%d",reverse);
  return 0;
}

