/*
Section 14
Roll no. 22IM10001
Name: Abhijit Kumar
Assignment no: 3
Description: Printing input values in words*/

#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a two digit integer between 20 and 99\n");
scanf("%d",&a);
if (a<20)
{
b=a/10;
c=a%10;
switch (b)
{
case 1 : printf("Invalid Input");
break;
case 2 : printf("Twenty");
break;
case 3 : printf("Thirty");
break;
case 4 : printf("Fourty");
break;
case 5 : printf("Fifty");
break;
case 6 : printf("Sixty");
break;
case 7 : printf("Seventy");
break;
case 8 : printf("Eighty");
break;
case 9 : printf("Ninety");
break;
}
switch (c)
{
case 1 : printf("One");
break;
case 2 : printf("Two");
break;
case 3 : printf("Three");
break;
case 4 : printf("Four");
break;
case 5 : printf("Five");
break;
case 6 : printf("Six");
break;
case 7 : printf("Seven");
break;
case 8 : printf("Eight");
break;
case 9 : printf("Nine");
break;
}
}
else
printf("Invalid Input");
return 0;
}
