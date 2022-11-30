/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 4
Description : to print pattern based on user input
*/
#include<stdio.h>
int main()
{
int n,i,j,k=0,a=1;
printf("enter a number to which you want to print pattern :- "); //getting number from user
scanf("%d",&n);
for(i=1;i<=n;i++)		//printing pattern using for loop
{
 for(j=1;j<=i;j++)
 { 
   if(j%2==0)
{
printf("%d",k);
}
else
{
printf("%d",a);
}
 }
printf("\n");
}
return 0;
}
