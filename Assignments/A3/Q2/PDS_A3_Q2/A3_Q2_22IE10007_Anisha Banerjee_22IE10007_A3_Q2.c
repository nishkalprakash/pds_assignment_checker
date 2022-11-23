/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 3
Program to print number in word
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
int i,a,b;
printf("Enter the 2 digit number between 20 and 99");
scanf("%d", &i);
a=i/10;
switch(a)
{
  case 2:
   {
     printf("Twenty ");
     break;
   }
 case 3:
{
printf("Thirty ");
break;
}
case 4:
{
printf("Forty ");
break;
}
case 5:
{
printf("Fifty ");
break;
}
case 6:
{
printf("Sixty ");
break;
}
case 7:
{
printf("Seventy ");
break;
}
case 8:
{
printf("Eighty ");
break;
}
case 9:
{
printf("Ninety ");
break;
}
default:
{
printf("Invalid");
break;
}
}
b=i%10;
switch(b)
{
case 1:
{
printf("One");
break;
}
case 2:
{
printf("Two");
break;
}
case 3:
{
printf("Three");
break;
}
case 4:
{
printf("Four");
break;
}
case 5:
{
printf("Five");
break;
}
case 6:
{
printf("Six");
break;
}
case 7:
{
printf("Seven");
break;
}
case 8:
{
printf("Eight");
break;
}
case 9:
{
printf("Nine");
break;
}

}
return 0;
}
