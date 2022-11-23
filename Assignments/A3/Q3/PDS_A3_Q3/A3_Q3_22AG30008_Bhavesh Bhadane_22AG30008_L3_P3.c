/*
  Section 14
  Roll no : 22AG30008
  Name : Bhavesh Nitin Bhadane
  Assignment no -3
  Program to check points
*/




#include<stdio.h>

#include<math.h>

 int main()

{

    float a,b ;
    char symbol;

   scanf("%c %f %f", &symbol,&a,&b);
  
  printf("Enter the symbol %c", symbol);
printf("Enter the numbers %f %f", a,b);

if (symbol == '+')


sum = a+b ;


 printf("The sum of a and b is :%f",sum);

if (symbol== '-')


subt = a-b;



printf("The subt of a and b is :%f",subt );

if (symbol == '*')
mult = a *b;

printf("The mult of a and b is :%f",mult);

if (symbol == '/')



div = a/b;

printf("The div of a and b is :%f",div);

return 0 ;

}

