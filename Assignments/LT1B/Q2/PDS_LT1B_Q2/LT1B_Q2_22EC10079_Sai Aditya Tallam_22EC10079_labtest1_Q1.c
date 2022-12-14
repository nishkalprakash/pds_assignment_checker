#include<stdio.h>     //header file 

int main()
{

 int i,j,n;         //declaring integer variables
 
 printf("enter any number from (2-10) : ");
 scanf("%d",&n);             //inputting an integer 
 for(i=1;i<=n;i++)
    
   {
      for(j=1;j<=i;j++)
     {
         printf("%d",i);
       } 
      printf("\n");        //next line
   }
  return 0;
 }
