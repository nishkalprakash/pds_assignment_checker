/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include<stdio.h>
int main()
{
   int n, a, b, c, reverse;

   printf("Enter the number to be reversed\n");
   scanf("%d", &n);

   a = n/100;
   b = (n%100)/10;
   c = n%10;

   reverse = c*100+ b*10+ a;

   printf("The reverse of the given number is %d", reverse);
   return 0;
}
