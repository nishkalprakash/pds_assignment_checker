/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:4
description:program to prints out a pattern based on the user input.

*/

#include<stdio.h>

int main()

{
int n,i,j;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for (j=1;j<=i;j++)
{
if(j%2==0)
printf("0");
else
printf("1");
}
printf("\n");
}
return 0;
}
