/*
section 14
roll no:22MI10013
assignment test 1
name ;animesh mishra
description:pattern based number
*/
#include<stdio.h>
int main()
{
int i,j,rows,sum=0,count=1;
printf("enter the number of rows for pattern"); //entering number of row
scanf("%d",&rows);

for(i=0;i<=rows;i++)    //loop for making the pattern
{


   for(j=1;j<=i;j++)
{    sum=sum+1;
 

     printf("%d",sum);
}
    printf("\n");
}

return 0;
}

