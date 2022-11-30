/*Sec        :14
Name       :Tejasree sai
Roll no    : 22CS10009
Assignment :4
Description:printing the pattern
*/

#include<stdio.h>
int main ()
{
 int input,row,col;
  printf("Enter your input:\n");
  scanf("%d",&input);
  row=1;
  
 while(row<=input)
 {
   col=1;
   while(col<=row)
     {
      if(col<row)
        printf("1 0 ");
      else
        printf("1");
      col=col+2;
     }
  printf("\n");
  row++;
 }
 return 0;
}
