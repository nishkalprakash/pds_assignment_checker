/*Section 14
  Roll no:22CS10029
  Name:Gurram Dhanunjay
  Assignment no:3
  Description:Program to write name of given integer*/
#include <stdio.h>
int main()
{
   int num;
   char c1,c2;
   printf("Enter a two digit integer between 20 and 99:\n");
   scanf("%d",&num);
   if (num<20 || num>99) {
     printf("Enter the integer from given range\n");}
   else {
     switch (num/10)
       { case 2:
           printf("Twenty");
           break;
         case 3:
           printf("Thirty");
           break;
         case 4:
           printf("Forty");
           break;
         case 5:
           printf("Fifty");
           break;
         case 6:
           printf("Sixty");
           break;
         case 7:
           printf("Seventy");
           break;
         case 8:
           printf("Eighty");
           break;
         case 9:
           printf("Ninety");
           break;
        }
      switch (num%10)
       { case 0:
            printf(" ");
            break;
         case 1:
            printf(" one");
            break;
         case 2:
            printf(" two");
            break;
         case 3:
            printf(" three");
            break;
         case 4:
            printf(" four");
            break;
         case 5:
            printf(" five");
            break;
         case 6:
            printf(" six");
            break;
         case 7:
            printf(" seven");
            break;
         case 8:
            printf(" eight");
            break;
         case 9:
            printf(" nine");
            break;
         }
       }
      return 0;
 }
           
     
