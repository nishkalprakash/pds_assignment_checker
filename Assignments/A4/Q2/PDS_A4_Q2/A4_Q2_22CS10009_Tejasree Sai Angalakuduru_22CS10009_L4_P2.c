/*Sec        :14
Name       :Tejasree sai
Roll no    : 22CS10009
Assignment :4
Description:Sum of digits
*/

#include<stdio.h>
int main ()
{
  int num,quo,rem,sum;
  printf("Enter your number:\n");
  scanf("%d",&num);
  sum=0;
  while(num!=0)
  {
   quo=num/10;
   rem=num%10;
   sum=sum+rem;
   num=quo;
  }
 printf("Sum of the digits is %d\n",sum);
 return 0;
}
  
