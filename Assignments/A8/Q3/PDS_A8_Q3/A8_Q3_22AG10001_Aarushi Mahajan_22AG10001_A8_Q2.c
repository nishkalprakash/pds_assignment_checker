/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 8
Description : Program to read text message.
*/

#include <stdio.h>
int main()
{
   printf("Enter text.\n");
   char str[100];
   
   scanf("%s",str);
   int n=0;
   while(str[n]!='\0'){
   n++;
   }
   
   printf("%s",str);

   return 0;
}
