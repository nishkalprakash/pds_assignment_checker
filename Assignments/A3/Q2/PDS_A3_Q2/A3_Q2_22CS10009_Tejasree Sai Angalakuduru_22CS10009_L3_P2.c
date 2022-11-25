/*Section      : 14
 Roll number  : 22CS10009
 Name         : Tejasree Sai
 Assignment no:3
 Description  :Printing numbers in words
*/

#include<stdio.h>
int main ()
{
 int x,y,z; // X is integer between 20 to 99
 printf("Enter a two digit number between 20 to 99\n");
 scanf ("%d",&x);
 y=x/10;   // y is quotient
 z=x%10;   //z is remainder
 switch(y)
{
 case 2:
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
 switch(z)
{
 case 1:
  printf ("One");
 break;
 case 2:
  printf("Two");
 break;
 case 3:
  printf("Three");
 break;
 case 4:
  printf("Four");
 break;
 case 5:
  printf("Five");
 break;
 case 6:
  printf("Six");
 break;
 case 7:
  printf("Seven");
 break;
 case 8:
  printf("Eight");
 break;
 case 9:
  printf("Nine");
 break;
}
 return 0;
}
