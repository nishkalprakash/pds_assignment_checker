/* NAME-ASMIT SRIVASTVA
ROLL NO-22MI31006
ASSIGNMENT-PRINT THE SUM OF DIGITS
*/
#include<stdio.h>
int main()
{
int number, sum=0;
printf("enter number");//enter any number//
scanf("%d",&number);

while (number!= 0) {       //using while loop//
sum=sum+(number%10);
number=number/10;
}
printf("sum of digits in number is %d\n",sum);
return 0;
} 
