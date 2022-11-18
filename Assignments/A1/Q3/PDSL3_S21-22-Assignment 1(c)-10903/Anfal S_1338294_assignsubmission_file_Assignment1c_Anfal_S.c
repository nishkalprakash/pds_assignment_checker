/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 1
Operating system: windows
*/

#include<stdio.h>
int main()
{
int digit;
float n,f,m,k;
printf("Enter Day\n");
scanf("%d",&digit);
switch(digit){
case 1: printf("Enter the value of number of machines\n");
scanf("%f",&m);
n=m;
printf("No of manufactured cars= %.0f\n",n);
break;
case 2: printf("enter values of no of machines\n");
scanf("%f",&m);
n=7*m/4;
printf("No of manufactured cars= %.0f\n",n);
break;
case 3:
case 6: printf("enter values of total no of machines and no of machines under inspection\n");
scanf("%f%f",&m,&k);
n=7*(m-k)/4;
printf("No of manufactured cars= %.0f\n",n);
break;
case 4:
case 5:
case 7: printf("Enter values of no of machines and the boosting fraction\n");
scanf("%f%f",&m,&f);
n=m+m*f;
printf("No of manufactured cars= %.0f\n",n);
break;
}

}
