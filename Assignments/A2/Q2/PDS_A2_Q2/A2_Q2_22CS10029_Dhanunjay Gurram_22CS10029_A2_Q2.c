/*This program is to declare and print a positive integer,any character,and a floating point number*/
#include <stdio.h>
int main()
{
   int int1;                               
   char ch1,ch2;
   float f1;
   printf("enter an integer:\n");
   scanf("%d",&int1);
   printf("enter a floating point number:\n");
   scanf("%f",&f1);
   printf("enter a character :\n");
   scanf("%c%c",&ch1,&ch2);                      //Two characters are given because enter is taken as a character//
   printf("The integer given :%d\n",int1);
   printf("The character given :%c\n",ch2); //%d must be replaced by %c to avoid error//
   printf("The floating value given is:%f",f1);//in order to print 10^ something we give e... example:6.023e23//
}

