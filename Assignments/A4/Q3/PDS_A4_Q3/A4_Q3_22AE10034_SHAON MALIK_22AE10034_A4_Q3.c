/* 
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No : 4
 Question No : 3
 Description :program to print the digits in reverse order in words
 */

#include <stdio.h>
int main()
{
  long N;//declaring variable
  printf("Enter a number from 0 to 9999999999:");
  scanf("%ld", &N);
  while(N>0)
 {
   switch(N%10)//extracting digits in reverse order
        {                                 //printing in words
 		 case 1:printf("One ");
                       break;

                case 2:printf("Two ");
                       break;

		case 3:printf("Three ");
                       break;

		case 4:printf("Four ");
                       break;

		case 5:printf("Five ");
                       break;

		case 6:printf("Six ");
                       break;

		case 7:printf("Seven ");
                       break;

		case 8:printf("Eight ");
                       break;

		case 9:printf("Nine ");
                       break;

		case 0:printf("Zero ");
                       break;
        }
   N/=10;
 }
     
return 0;
}
