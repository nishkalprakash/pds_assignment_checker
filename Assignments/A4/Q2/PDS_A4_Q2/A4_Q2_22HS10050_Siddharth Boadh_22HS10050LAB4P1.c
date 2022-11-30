/* NAME - SIDDHARTH BOADH
ROLL NUMBER- 22HS10050
ASSIGNMENT - PRINT SUM OF DIGITS OF NUMBER
*/








#include<stdio.h>
int main()
{
int n, sum=0;
printf("Enter the integer"); //enter the number whose sum of digits you want//
scanf("%d",&n);
while(n!=0){   //using while loop//
sum = sum + (n % 10);
n = n / 10;
}
printf("sum of digits of number is %d\n",sum);
return 0;
} 











