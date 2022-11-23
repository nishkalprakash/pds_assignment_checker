/*Section 14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:3
description:number in words
*/
#include <stdio.h>
int main()
{
int n;//declared a to store number from user
printf("Enter number between 20 to 99:");
scanf("%d",&n);//user input
int unit=n%10;int ten=n/10;//unit and tenth digit extraction
if(n>=20&&n<=99)//validity of input
{
switch (ten)
{
case 2:printf("Twenty ");break;
case 3:printf("Thirty ");break;
case 4:printf("Forty ");break;
case 5:printf("Fifty ");break;
case 6:printf("Sixty ");break;
case 7:printf("Seventy ");break;
case 8:printf("Eighty ");break;
case 9:printf("Ninety ");break;
}
switch (unit)
{
case 0:printf("\n");break;
case 1:printf("One\n");break;
case 2:printf("Two\n");break;
case 3:printf("Three\n");break;
case 4:printf("Four\n");break;
case 5:printf("Five\n");break;
case 6:printf("Six\n");break;
case 7:printf("Seven\n");break;
case 8:printf("Eight\n");break;
case 9:printf("Nine\n");break;
}
}
else
printf("Invalid Input");//printed when condition not satisfied
return 0;
}


