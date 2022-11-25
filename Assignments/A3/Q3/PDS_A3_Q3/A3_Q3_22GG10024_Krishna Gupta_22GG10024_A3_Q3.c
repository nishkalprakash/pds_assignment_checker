/*Section 14
  Roll No :22GG10024
  Name : KRISHNA GUPTA
  Assignment No : 3
  Description : PROGRAM TO PERFORM ARITHMETIC OPERATIONS*/
#include <stdio.h>  // main fumction
int main()
{  
  char operator;   // taking an binary arithmetic operator as input
  float a , b ,sum,subs,mult,div ;     
  printf("Enter a binary arithmetic operator :"); // taking an binary arithmetic operator as input
  scanf("%c",&operator);
 printf("Enter a number :");  // taking operands as input
  scanf("%f",&a);
printf("Enter a number :"); // taking operands as input
  scanf("%f",&b);
 // if cases for the entered binary arithmetic operator
  if (operator == '+')   // case for addtion
{    
    sum = a+b;
   printf("%f",sum);
}
     if (operator == '-')  // case for substraction
{    
    subs = a-b;
   printf("%f",subs);
}
  if (operator == '*')  // case for mutiplication
{    
    mult = a*b;
   printf("%f",mult);
}
  if (operator == '/') // case for division
{    
    div = a/b;
   printf("%f",div);
}
return 0 ;
}
 
 
 
