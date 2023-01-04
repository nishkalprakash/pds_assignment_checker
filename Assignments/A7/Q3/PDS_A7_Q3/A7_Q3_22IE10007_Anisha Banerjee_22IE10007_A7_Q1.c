/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 7
Program to check two strings whether they are anagram 
*/
#include<stdio.h>
int main()
   {
     int l1=0,l2=0,c=0,i,j;
     char s1[10];
     char s2[10];
     printf("Enter the first string\n");
     scanf("%s",&s1);
     printf("Enter the second string\n");
     scanf("%s",&s2);
     while(s1[l1]!='\0')
          l1++;
     while(s1[l2]!='\0')
          l2++;
     if(l1!=l2)
       printf("Not Anagram\n");
     for(i=0;i<l1;i++)
        {
          for(j=0;j<l2;j++)
             {
              if(s1[i]==s2[j])
                c++;
              }
         }
     if(c==l1)
       printf("Anagram\n");
     else
        printf("NOT Anagram\n");
     return 0;
    }
