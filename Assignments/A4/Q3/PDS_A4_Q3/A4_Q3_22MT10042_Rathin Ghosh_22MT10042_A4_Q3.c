//program takes an integer as input and prints its digits in reverse in words.
#include<stdio.h>
int main()
{
int n,m=0;
printf("Enter any integer with number of digits <=10 : ");
scanf("%d",&n);
while(n!=0)
{
m=n%10;
switch(m)
{
case 1:
printf("One ");
break;
case 2:
printf("Two ");
break;
case 3:
printf("Three ");
break;
case 4:
printf("Four ");
break;
case 5:
printf("Five ");
break;
case 6:
printf("Six ");
break;
case 7:
printf("Seven ");
break;
case 8:
printf("Eight ");
break;
case 9:
printf("Nine ");
break;
case 0:
printf("Zero ");
break;
}
n=n/10;
}
return 0;
}








