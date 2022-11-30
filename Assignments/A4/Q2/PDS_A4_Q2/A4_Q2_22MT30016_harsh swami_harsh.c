/*section:14
roll no.22MT30016
name:harsh
assignment:4
description:sum of digits */

#include<stdio.h>

int main()
{
int n;
 
printf("enter a number n ");
scanf("%d", &n);

int i=n;
int sum=0;
int r=0;
while(i!=0)

{
r=i%10;
sum=sum+r;
i=i/10;
}

printf("sum is %d",sum);

return 0;
}


