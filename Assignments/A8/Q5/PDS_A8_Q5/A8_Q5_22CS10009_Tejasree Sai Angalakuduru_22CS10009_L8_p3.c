/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 8
 *Description   : s1,s2 comparision
 */

#include<stdio.h>
#include<string.h>
int main ()
{
 char word[25],sub[25];
int i,c,j;
printf("Enter the word");
scanf("%s",word);

 c=strlen(word);
 
 for(i=1;i<c;i++)
 {
   for (j=0;j<c-i;j++)
   {
     
     if(check(word)==1)
       for(i=0;word[i]!='\0';i++)
        printf("%c",word[i]);
     printf("is a palindrome");
   }
}
  
 
}

int check(char word[])
{
  int c,i;
  c=strlen(word);
 for(i=0;word[i]!='\0';i++)
 {
   if(word[i]!=word[c-i-1])
    {
      return 0;
 break;     }
   }
  return 1;
 }
   
