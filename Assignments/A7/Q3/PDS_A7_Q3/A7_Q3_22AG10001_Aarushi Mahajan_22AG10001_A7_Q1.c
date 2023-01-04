/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 7
Description : Program to check if two strings are anagrams.
*/

#include <stdio.h>
int main()
{
   int size1, size2;
   printf("How many characters are in string 1?\n");
   scanf("%d",&size1);
   char s1[size1];
   printf("Enter string 1.\n");
   for (int i=0;i<size1;i++)
   scanf("%c",&s1[i]);

   printf("How many characters are in string 2?\n");
   scanf("%d",&size2);
   char s2[size2];
   printf("Enter string 2.\n");
   for (int j=0;j<size2;j++)
   scanf("%c",&s2[j]);
   for (int i=0;i<size2;i++)
   printf("%c\n",s2[i]);
   return 0;
}
