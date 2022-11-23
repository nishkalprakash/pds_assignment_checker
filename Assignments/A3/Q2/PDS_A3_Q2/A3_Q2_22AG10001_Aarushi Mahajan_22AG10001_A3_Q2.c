/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 3
Description : Program to print input number in words
*/

#include <stdio.h>
int main()

{
   int t,u,d;
   printf("Enter a number from 20 to 99.\n");
   scanf("%d", &d);
   t=d/10;
   u=d%10;
   
   if (t==2)
   printf("Twenty_");
   else if (t==3)
   printf("Thirty_");
   else if (t==4)
   printf("Forty_");
   else if (t==5)
   printf("Fifty_");
   else if (t==6)
   printf("Sixty_");
   else if (t==7)
   printf("Seventy_");
   else if (t==8)
   printf("Eighty_");
   else if (t==9)
   printf("Ninety_");

  { if (u==1)
   printf("one");
   else if (u==2)
   printf("two");
   else if (u==3)
   printf("three");
   else if (u==4)
   printf("four");
   else if (u==5)
   printf("five");
   else if (u==6)
   printf("six");
   else if (u==7)
   printf("seven");
   else if (u==8)
   printf("eight");
   else if (u==9)
   printf("nine");}

   return 0;
}


