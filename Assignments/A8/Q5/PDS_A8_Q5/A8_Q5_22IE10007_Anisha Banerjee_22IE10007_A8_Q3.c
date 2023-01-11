/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 8
Program to find all the palindrome substrings of an input string
*/
#include<stdio.h>
int palindrome(char s[],int len,int strtind)
   {
     char s1[30];
     int i,flag=1;
     for(i=0;i<len;i++)
        {
          s1[i]=s[strtind+i];  // storing substring in a different array
         }
     for(i=0;i<len;i++)
        {
          if(s1[i]!=s1[len-i-1]) //checking palindrome
            flag=0;
         }
    return flag;
    }
      
int main()
   {
     int i,l=0,j,c,m=0,k;
     char s[30];
     printf("Enter the string\n");
     scanf("%s",&s);
     for(i=0;s[i]!='\0';i++)
        l++;
     for(i=2;i<=l;i++)             //Deciding length of substring
        {
          for(j=0;(j+i)<=l;j++)   // Going across the string
             {
               c=palindrome(s,i,j);  // checking palindrome
               if(c==1)
                 {
                   m++;                  //counting palindrome
                   for(k=j;k<(j+i);k++)   
                      printf("%c",s[k]);  //printing palindrome
                   printf(",");
                 }
             }
        }
     if(m==0)
       printf("No palindrome substrings present");
     return 0;
   }
