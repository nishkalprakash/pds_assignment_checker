#include<stdio.h>
int main()
{
int row;
printf("enter number of rows less than 9");
scanf("%d",&row);
for(int i=1;i<=row;i++)
   {for(int j=1; j<=row-1;j++)
     printf(" ");
     for(int k=1; k<=(i*2-1);k++)
     {
      printf("%d",i);
     }
 printf("\n");}
 return(0);
 
 }
