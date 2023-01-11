/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 8
Description : Program to print all the palindromes in a word.
*/

#include <stdio.h>

int n;
void pal(char str[n])
{
   int count= 0;
   for (int j=1;j<(n-(n/2));j++)
   {
	int a= (n/2)-j;
	int b= (n/2)+j;
	if (str[a]==str[b])
        { printf("y");
	count++;
   }
   if (count!= (n-(n/2)-1))
   printf("No palindrome substrings present.");
}


int main()
{
   printf("Enter word.\n");
   char str[100];
   
   scanf("%s",str);
   int i=0;
   while(str[i]!='\0'){
   i++;
   }
   

   
   

   return 0;
}
	
