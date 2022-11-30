/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:4
description:program to display all factors of a number.
*/
#include<stdio.h>
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
if(n<0)
n=-n;
for(int i=1 ;i<=n;i++)
{
if(n%i==0)
printf("%d ",i);
}
return 0;
}
