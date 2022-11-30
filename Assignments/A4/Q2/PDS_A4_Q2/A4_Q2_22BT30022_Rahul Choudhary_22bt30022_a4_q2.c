/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:4
description:program to write number in reverse

*/

#include<stdio.h>

int main()

{
 long int n,rem=0,sum=0;
printf("enter a number");
scanf("%ld",&n);
while (n!=0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
printf("sum of digits %ld",sum);
}
return 0;
}

