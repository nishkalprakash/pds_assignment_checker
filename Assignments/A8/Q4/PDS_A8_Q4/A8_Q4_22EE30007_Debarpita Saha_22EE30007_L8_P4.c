/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 8
* Description : Program to find the number of times string 1 appears in string 2 as a substring
*/
#include<stdio.h>
int main()
{
  char s1[25], s2[25];
  scanf("%s",s1);
  scanf("%s",s2);
  int i,j,k,flag;
  k=0;
  for(i=0;s1[i]!='\0';i++)
  {
   flag=1;
   for(j=0; s2[j]!='\0'; j++)
    if(s1[i+j]!=s2[j])
    {
     flag=0;
     break;
    }
    if(flag==1)
    k++;
  }
 printf("number of matches= %d",k);
}
