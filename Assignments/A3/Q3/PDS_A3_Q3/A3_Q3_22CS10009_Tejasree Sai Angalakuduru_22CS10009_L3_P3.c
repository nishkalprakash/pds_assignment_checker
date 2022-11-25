/*Section      : 14
 Roll number  : 22CS10009
 Name         : Tejasree Sai
 Assignment no:3
 Description  :Performing arithematic operations
*/

#include<stdio.h>
int main ()
{
 char a;
 float x,y,result;
 printf("Enter the operation and the two operands:\n");
 scanf("%c %f %f",&a,&x,&y);
 switch(a)            // Here a is the operation
 {
  case '+':
   result=x+y;
  break;
  case '-':
   result=x-y;
  break;
  case '*':
   result=x*y;
  break;
  case '/':
   result=x/y;
  break;
 }                              
 printf("Your result is %.2f\n",result);
 return 0;
}
 
 
