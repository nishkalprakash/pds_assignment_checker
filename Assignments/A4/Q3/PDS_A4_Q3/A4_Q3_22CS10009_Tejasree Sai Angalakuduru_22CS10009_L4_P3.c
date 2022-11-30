/*Sec        :14
Name       :Tejasree sai
Roll no    : 22CS10009
Assignment :4
Description:Reading reversed num in words
*/

#include<stdio.h>
int main ()
{
  int rem,quo;
  long num;
  printf("Enter your number:\n");
  scanf("%ld",&num);
  while(num!=0)
    {
      quo=num/10;
       rem=num%10;                //here rem will be the digits
       switch(rem)                //switch case is used to print in words
       {  case 0:
             printf("Zero ");
          break;
         case 1:
             printf("One ");
          break; 
         case 2:
             printf("Two ");
          break;
         case 3:
             printf("Three ");
          break;
         case 4:
             printf("Four ");
          break;
         case 5:
             printf("Five ");
          break;
         case 6:
             printf("Six ");
          break;
         case 7:
             printf("Seven ");
          break;
         case 8:
             printf("Eight ");
          break;
         case 9:
             printf("Nine ");
          break;
       }
                
      num=quo;
   }
 return 0;
}
