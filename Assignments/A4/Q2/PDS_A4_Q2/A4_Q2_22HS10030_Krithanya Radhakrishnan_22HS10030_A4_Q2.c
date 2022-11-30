/*
Krithanya R
section 14
22HS10030
desc: To find sum of digits
*/

#include <stdio.h>
int main()
{
int n,sum=0;
printf("enter the number \n");
scanf("%d",&n);
while (n!=0)
{
sum=sum +(n%10);
n=n/10;
}
printf("the sum of digit is %d\n",sum);
return 0;
}

