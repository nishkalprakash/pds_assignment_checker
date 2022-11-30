/*
Section 14
Roll no. 22IM10001
Name: Abhijit Kumar
Assignment no: 4
Description: Displaying the digits in words in reverse order
*/
#include<stdio.h>
int main()
{
long int i,n=10,a;
printf("Please enter a number \n");
scanf ("%ld",&i);
if (i==0)
printf("zero");
else
while (i<10000000000,n<10000000000,i!=0)
{
a=i%n;
if (a==0)
printf("zero ");
else
if (a==1)
printf("one ");
else
if (a==2)
printf("two ");
else
if (a==3)
printf("three ");
else
if (a==4)
printf("four ");
else
if (a==5)
printf("five ");
else
if (a==6)
printf("six ");
else
if (a==7)
printf("seven ");
else
if (a==8)
printf("eight ");
else
if (a==9)
printf("nine ");
i=(i-a)/10;
}
return 0;
}

