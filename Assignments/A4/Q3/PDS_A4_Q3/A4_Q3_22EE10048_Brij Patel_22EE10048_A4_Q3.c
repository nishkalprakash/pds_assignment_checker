/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 4

Description-Reverse number in words

*/
#include <stdio.h>
int main()
{
long int n;
int rem=0;
printf("Enter a number\n");
scanf("%ld",&n);
if(n==0)
printf("Zero);
while(n!=0)
{
rem=n%10;
switch(rem)
{
case 0:
printf("Zero ");
break;
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
}
n=n/10;
}

return 0;
}
