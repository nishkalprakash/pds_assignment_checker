/*
Section 14
Roll no. 22IM10001
Name: Abhijit Kumar
Assignment no: 4
Description: Finding the sum of digits of a given integer.
*/
#include<stdio.h>
int main()
{
long int i,n=1000000,a,add=0;
printf("Please enter a number \n");
scanf ("%ld",&i);
while (-1000000<i<1000000,n!=0)
{
a=i/n;
add=add+a;
i=i-a*n;
n=n/10;
}
printf("sum of digits=%ld",add);
return 0;
}

