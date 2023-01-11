/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 8
Program to count the number of occurences of a given substring in a given string 
*/
#include<stdio.h>
int main()
   {
     char S1[5];
     char S2[50];
     int i,j,c=0,flag=0,l1=0,l2=0;
     printf("Enter string S1\n");
     scanf("%s",&S1);
     printf("Enter string S2\n");
     scanf("%s",&S2);
     for(i=0;S1[i]!='\0';i++)  // Calculating length
        l1++;
     for(i=0;S2[i]!='\0';i++)   // Calculating length
        l2++;
     for(i=0;i<(l2-2);i++)
        {
          flag=0;
          for(j=0;j<l1;j++)
             {
               if(S2[i+j]!=S1[j])   // Matching all elements of the substring with the original string
                 flag=1;
              }
          if(flag==0)
            c++;                  // Counting total occurence
        }
    printf("%d ",c);
    return 0;
    }
