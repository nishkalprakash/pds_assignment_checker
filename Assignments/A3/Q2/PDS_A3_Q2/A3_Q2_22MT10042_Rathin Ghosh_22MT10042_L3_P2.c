/*
Section-14
Roll no.-22MT10042
Name- Rathin Ghosh
Assignment number-3
Program description : prints the input integer in words
*/
#include <stdio.h>
int main()
{
int n;
printf("Enter any integer between 20 and 99 : ");
scanf("%d", &n);
int m=n/10;
switch(m)
{
case 2:
printf("Twenty ");
break;
case 3:
printf("Thirty ");
break;
case 4:
printf("Forty ");
break;
case 5:
printf("Fifty ");
break;
case 6:
printf("Sixty ");
break;
case 7:
printf("Seventy ");
break;
default:
printf("Invalid input!");
}
int r=n%10;
switch(r)
{
case 0:
break;
case 1:
printf("One");
break;
case 2:
printf("Two");
break;
case 3:
printf("Three");
break;
case 4:
printf("Four");
break;
case 5:
printf("Five");
break;
case 6:
printf("Six");
break;
case 7:
printf("Seven");
break;
case 8:
printf("Eight");
break;
case 9:
printf("Nine");
break;
default:
break;
}
return 0;
}
