/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 11
Description : to check given number belongs to fibonacci sequence or not
*/
#include<stdio.h>
int fibo(int n); //declaring function
int main()
{
int n,testcase=0;
printf("Enter integer ");
scanf("%d",&n);
for(int i=0;i<=n+1;i++)
{
if(fibo(i)==n) //calling fcuntion and calculating terms (upto n+1 to find 3)
{
testcase=1;
break;
}
else if(fibo(i)>n)
break;
}
if(testcase==1) //using testcase we'll find terms is in the series or not 
printf("Yes\n");
else
printf("No\n");

return 0;
}
int fibo(int n) //fucntion definition
{
int sum=0;
if(n==0)
return 0;
else if(n==1)
return 1;
else
sum=fibo(n-1)+fibo(n-2); //recurring function
return sum;
}
