/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:4
description:program to display different digits in reverse in words.

*/

#include<stdio.h>

int main()

{
long int n;
int digit=0;
printf("enter a number");
scanf("%ld",&n);
if (n==0)
printf("zero");
while (n!=0)
{
digit=n%10;
switch(digit)
{
case 0:
printf("zero ");
break;
case 1:
printf("one ");
break;
case 2:
printf("two ");
break;
case 3:
printf("three ");
break;
case 4:
printf("four ");
break;
case 5:
printf("five ");
break;
case 6:
printf("six ");
break;
case 7:
printf("seven ");
break;
case 8:
printf("eight ");
break;
case 9:
printf("nine ");
break;
}
n=n/10;
}
return 0;
}


