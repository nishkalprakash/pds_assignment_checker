/*
Section 14
Roll No : 22CH30025
Name: Rajdeep Lahiri
Assignment No : 3
Description: Program to return the input value of a number in words.*/

#include <stdio.h>
int main()
{
   int num,ud,td;
   printf("enter the number");
   scanf("%d",&num);
   td = num/10;
   ud = num -(10*td); 
   switch(td)
   {
     case 2:
      printf("twenty \t");
      break;
     case 3:
      printf("thirty \t");
      break; 
     case 4: 
      printf("forty \t");
      break;
     case 5:
      printf("fifty \t");
      break;
     case 6:
      printf("sixty \t");
      break;
     case 7:
      printf("seventy \t");
      break;
     case 8:
      printf("eighty\t");
      break; 
     case 9:
       printf("ninety \t");
      break;
     default:
       printf("invalid number");
    }

   switch(ud)
   {
     
     
    case 1:
     printf("one");
     break;
    case 2:
     printf("two");
     break;
    case 3:
     printf("three");
     break;
    case 4:
     printf("four");
     break;
    case 5:
     printf("five");
     break;
    case 6:
     printf("six");
     break;
    case 7:
     printf("seven");
     break;
    case 8:

     printf("eight");
     break;
    case 9:
     printf("nine");
     break;
   }
return 0;
}



      
