/* 
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :3
 Description :Program to print number in words
 */

#include <stdio.h>
 int main()
 {
  int n,unit,tens;//declaring variables
   printf("Enter a two digit number from 20 to 99 : \n");
   scanf("%2d",&n);//read the two digit number
   unit=n%10;
   tens=n/10;
   switch(tens)//to print the 'tens' part of the number
   {
        case 2: printf("TWENTY ");
             break;
        case 3: printf("THIRTY ");
             break;
	case 4: printf("FORTY ");
             break;
	case 5: printf("FIFTY ");
             break;
	case 6: printf("SIXTY ");
             break;
	case 7: printf("SEVENTY ");
             break;
	case 8: printf("EIGHTY ");
             break;
	case 9: printf("NINETY ");
             break;
        default: printf("INVALID INPUT");
    }

   switch(unit)//to print the 'units' part of the number
   {
        case 1: printf("ONE");
  	     break;
        case 2: printf("TWO");
             break;
        case 3: printf("THREE");
             break;
	case 4: printf("FOUR");
             break;
	case 5: printf("FIVE");
             break;
	case 6: printf("SIX");
             break;
	case 7: printf("SEVEN");
             break;
	case 8: printf("EIGHT");
             break;
	case 9: printf("NINE");
             break;
   }
printf("\n");
return 0;
}//end of program
