/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 8
Program to calculate details of an input message
*/
#include<stdio.h>
#include<string.h>
int countlen(char s[])
   {
     int l1=0,l2,i;
     for(i=0;s[i]!=0;i++)                    //Calculating length
       l1++;
     printf("Length counted without using library: %d\n",l1);
     l2=strlen(s);                                            // library calculation
     printf("Length counted by strlen(): %d\n",l1);
     return l1;
   }
void countword(char s[],int l)
     {
       int c=1,i;
       for(i=0;i<l;i++)
        {
          if (s[i]==' ')                   // word counting
            c++;
         }
       printf("Number of words: %d\n",c);
     }
void countsen(char s[],int l)
    {
      int c=0,i;
       for(i=0;i<l;i++)
        {
          if (s[i]=='.')                //sentence counting
            c++;
         }
       printf("Number of sentences: %d\n",c);
     }
void countvow(char s[],int l)
    {
      int c=0,i;
       for(i=0;i<l;i++)
        {
          if ((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
            c++;                                              //vowel counting
         }
       printf("Number of vowels: %d\n",c);
     }
void countfreq(char s[],int l)
    {
      printf("Frequency count of each alphabet:\n");
      char f[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
      char g[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};  //storing all letters
      int i,j,c=0;
      for(i=0;i<26;i++)
         {
           c=0;
           for(j=0;j<l;j++)
              {
                if((f[i]==s[j])||g[i]==s[j])     //matching
                  c++;                           //counting
              }
           if(c!=0)
             printf("'%c' = %d,",f[i],c);       //printing
         }
     }
int main()
   {
     char s[100],l=0,i;
     printf("Enter the string\n");
     scanf("%[^\n]",&s);
      l=countlen(s);
      countword(s,l);
      countsen(s,l);
      countvow(s,l);
      countfreq(s,l);
      return 0;
   }
