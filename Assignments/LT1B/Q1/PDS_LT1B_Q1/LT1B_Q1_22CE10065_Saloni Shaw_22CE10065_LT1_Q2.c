/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Test 1 (Set-B)
Description - Program to find the set of Armstrong numbers
*/

#include <stdio.h>
#include <math.h>
int main()
{
int N,d,f,i,r,sum,p;//declaring variables
printf(" Enter the number\n ");
scanf("%d",&N);//taking input
if(N==0 || N<0)//checking validity
printf("Invalid output");
for (i=0; i<=N;i++)//starting loop for numbers less than N
{
d=0;sum=0;
while(f>=0)
{
//loop for armstrong number
r=f%10;//to extract digits
f=f/10;//for getting new number
d++;//calculating no. of digits
}
while(f>=0)
{
r=f%10;
f=f/10;
p=(pow(r,d));//adding power of d to digits
sum=sum+p;//calculating sum
}
if(sum<=N)//for less than N
printf("%d ",sum);
}
return 0;
}
//end of program
