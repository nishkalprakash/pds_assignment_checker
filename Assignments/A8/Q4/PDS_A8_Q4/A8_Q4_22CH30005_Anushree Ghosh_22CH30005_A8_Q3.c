/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 8
description:printing one string as a substring to the other
*/

#include<stdio.h>

 int main()
 {
    // taking input of two strings
  char s1[100],s2[100];
  int size1=0,size2=0,i,j;
  printf("enter string s1:");
  scanf("%s",&s1[i]);      //scanning string1
  printf("enter string s2:");
  scanf("%s",&s2[i]);      //scanning string2

  for(i=0;s1[i]!='\0';i++) 
 {
   size1++;
 }
 for(i=0;s2[i]!='\0';i++)
{
 if(s1[j]==s2[i])
  {
  for(k=j;k<=size1;k++) 
   {
   
   size2++;
   }
  }
}
 printf("%d",size2);

 return 0;
}
