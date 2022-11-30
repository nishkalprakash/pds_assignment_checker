/* Section 14
   roll no- 22EE30007
   name- Debarpita Saha
   Assignment no-4
   Description-  program to display the reverse digits in words
 */ 
#include<stdio.h>
int main()
{
 int n,a;
printf("enter a number from 0 to 99999999:");
 scanf("%d", &n);
while(n!=0){
 a=n%10;
 switch(a){
 case 0: printf("Zero ");
         break;
case 1: printf("One ");
         break;
case 2: printf("Two ");
         break;
case 3: printf("Three ");
         break;
case 4: printf("Four ");
         break;
case 5: printf("Five ");
         break;
case 6: printf("Six ");
         break;
case 7: printf("Seven ");
         break;
case 8: printf("Eight ");
         break;
case 9: printf("Nine ");
         break;
}
n=n/10;
}
return 0;
}

