#include <stdio.h>
/*Name:Kondakindi Shreya Reddy
Roll no.:21CE10032
Department:Civil Engineering
Package:CodeBlocks
Operating System:Windows*/

int main()
{
   int number;
   printf("enter a 3-digit number:");
   scanf("%d",&number);//a,b,c are the hundredth,tenth,units places of the 3 digit number
   int a,b,c;
   a=number/100;
   b=(number/10)%10;
   c=number%10;
   int reverse;
   reverse=c*100+b*10+a;
   printf("Reverse number=%d",reverse);
   return 0;

}
