/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 8
Description : Program to check how many times a substring appears in a string.
*/

#include <stdio.h>
int main()
{
   int n1, n2;

   printf("Enter length of string 1.\n");
   scanf("%d",&n1);
   char s1[n1];
   printf("Enter string 1.\n"); 
   scanf("%s",s1);
 
   printf("Enter length of string 2.\n");
   scanf("%d",&n2);
   char s2[n2];
   printf("Enter string 2.\n");
   scanf("%s",s2);   

   int count=0;
   for (int i=0;i<n2;i++)
   {
	if ((s1[0]==s2[i])&&(s1[1]==s2[i+1])&&(s1[2]==s2[i+2]))
	count++;
   }
   printf("The number of times string 1 appears in string 2 is %d.\n",count);               

   return 0;
}
