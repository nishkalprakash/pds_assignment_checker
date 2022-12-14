/*
 Sec      :14
 Name     :A.Tejasree Sai
 Roll no  :22CS10009
 Assignment no : Lab Test
 Description  : Printing Pattern
*/
#include<stdio.h>

int main ()
{
  int N,row,col,j=0;
  printf("Enter an integer : \n");
  scanf("%d",&N);
  for(row=1;row<=N;row++)
   {
     for(col=1;col<=row;col++)
      {
        printf("%d\t",1+j);
        j++;
      }
     printf("\n");
   }
  return 0;
}
  
