/*
 Sec      :14
 Name     :A.Tejasree Sai
 Roll no  :22CS10009
 Assignment no : 6
 Description  : 
*/

#include<stdio.h>

int searchset(int *A,int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(n==A[i])
    return 1;
   
  else
   continue;
  }
 return 0;
}

int* buildset(int* A,int n)
{
  for(i=0;i<n;i++)
   scanf("%d",&A[i]);
  return (*A);
}
