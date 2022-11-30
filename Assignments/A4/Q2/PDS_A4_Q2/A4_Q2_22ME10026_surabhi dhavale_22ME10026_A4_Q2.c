/*
section 14
roll no. 22Me10026
assignment 4
*/

#include<stdio.h>

int main()
{
int n, sum=0;
printf("print any number");
scanf("%d",&n);



while (n!=0)
{
sum=sum+n%10;
n=n/10;
}

printf("sum of num is %d",sum);


return 0;
}

