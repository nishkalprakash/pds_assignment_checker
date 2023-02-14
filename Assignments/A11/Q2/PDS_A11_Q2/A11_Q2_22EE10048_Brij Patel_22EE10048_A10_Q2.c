/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 11

Description- Recursive function to check whether a number n belongs to the fibonacci sequence or not
*/
#include<stdio.h>//INCLUDING PACKAGE
int fib(int n)
{
int sum=0;
if(n==0)sum=0;//base condition 1
else if(n==1)sum=1;//base condition 2
else sum=fib(n-1)+fib(n-2);//generating sequence
return sum;
}
int main()//MAIN METHOD
{

int n,temp;
printf("Enter n: ");
scanf("%d",&n);//gets n from user
for(int i=0;i<=(1+n);i++)
{
if(fib(i)==n)//checking if number is in the fibonacci sequence
{
temp=1;
break;
}
else if(fib(i)>n)
{
temp=0;
break;
}
else
temp=0;
}
if(temp)
printf("YES\n");
else
printf("NO\n");
return 0;
}