/* Section 14
   roll no- 22EE30007
   name- Debarpita Saha
   Assignment no-3
   Description-  program to take input and print the  input number in words
 */
#include<stdio.h>
int main()
{
 int x;//to input a 2 digit number from 20 to 99
 scanf("%d", &x);
 int a= x/10;
 int b= x%10;
 switch(a){
  case 2: printf("Twenty");
  break;
  case 3: printf("Thirty");
  break;
 case 4: printf("Forty");
  break;
 case 5: printf("Fifty");
  break;
 case 6: printf("Sixty");
  break;
 case 7: printf("Seventy");
  break;
 case 8: printf("Eighty");
  break;
 case 9: printf("Ninety");
  break;
 }
 switch(b){
  case 0: printf(" zero");
  break;
  case 1: printf(" one");
  break;
  case 2: printf(" two");
  break;
 case 3: printf(" three");
  break;
 case 4: printf(" four");
  break;
 case 5: printf(" five");
  break;
 case 6: printf(" six");
  break;
 case 7: printf(" seven");
  break;
 case 8: printf(" eight");
  break;
 case 9: printf(" nine");
  break;
 }
return 0;
}
 
