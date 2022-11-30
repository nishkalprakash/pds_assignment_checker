#include<stdio.h>


int main()
{
int n, sum=0;
printf("Enter any Number:");
scanf ("%d", &n);
 do 
{
sum = sum + (n % 10);
n = n/10;
}
while(n!=0);
printf("The sum of the digits is: %d ", sum);
return 0;
}
