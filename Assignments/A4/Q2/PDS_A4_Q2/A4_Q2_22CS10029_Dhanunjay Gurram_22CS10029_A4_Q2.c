//This program determines sum of digits of given integer
#include <stdio.h>
int main()
{
   int num,x,num1;
   printf("Enter the integer:");
   scanf("%d",&num1);
   x=0;
   num=num1;
   if (num<0) num=num*-1;
   while (num!=0){
     x=x+num%10;                             //Adds a digit from integer
     num=num/10;}
   if (num1<0) x=x*-1;                      //Gives -ve output for -ve integers
   printf("Sum of the digits:%d\n",x);
   return 0;
}
