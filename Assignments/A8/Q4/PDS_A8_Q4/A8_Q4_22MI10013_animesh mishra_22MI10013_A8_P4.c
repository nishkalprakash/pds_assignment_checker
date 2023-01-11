/*
section:14
roll no:22MI10013
name:animesh mishra
assignment no:8 
description:number of times string s1 appears in string s2 
*/
#include<stdio.h>
int main()
{
      int count=0;

      char str1[25];
      char str2[25];
      printf("enter first string :");
      scanf("%s",str1);
      printf("enter the second string :");
      scanf("%s",str2);
      for(int i=0;str2[i]!='\0';i++)
{
       int flag;
       for(int j=0;str1[j]!='\0';j++)
         {
                if(str2[i+j]==str1[j])
                      flag=1;
                else
                       {
                       flag=0;
                       break;
                       }
    }
         if(flag==1)
                 count++;
     }
    printf("%d",count);
 
   return 0;
}

