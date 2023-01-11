/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 8
Description :A program to print all the palindromes in a word.
*/

#include<stdio.h>

int main()
{
   int n;
   printf("Enter the letters of the word : ");
   scanf("%d",&n);
   char word[n];
   printf("Enter the word : ");
   for(int i=0;i<n;i++)
   {
    scanf("%c",&word[i]);
   }
   if(n==5)
     {printf("No palindrome substrings found\n");}
  
   for(int i=0;i<n && i!=5 ;i++)
   {
        if(word[i]=word[n-i-1])
       {   
        printf("%c",word[i]);
       } 
        else printf("No palindrome substrings found");
   }
   printf("\n");
   for(int i=0;i<n-1;i++)
   {
        if(word[i]=word[n-i-2])
       {   
        printf("%c",word[i]);
       } 
   }
return 0;
}
 
  











    
