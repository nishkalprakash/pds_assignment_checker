/*Assignment 4

  Muskan

  Section - 14*/

#include<stdio.h>

int main()

{
long int n, rev=0,i;
printf("Enter a number:");
scanf("%ld",&n);
if((n>=0)&&(n<999999999))
{
while(n!=0)
{
i=n% (10);
n=n/10;
switch(i)
{case 0:
         printf("zero");
         break;
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
         default:printf("this is not valid");
}
}
}
return 0;
}




