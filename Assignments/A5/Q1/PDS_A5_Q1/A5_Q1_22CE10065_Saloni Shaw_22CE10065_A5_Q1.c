/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 5
Description - Program to find the sum of the first n terms of series.
*/

#include <stdio.h>


int power ( int x, int n)

{

int i, pr=1;
float sum;

for ( i=1;i<=n;i++)

{

pr=pr*x;

return pr;

}
}

int  fact ( int n)

{

int i =1, pr=1;

for (i =1;i<=n;i++)

pr=pr*i;

return pr;

}

int main ()

{

int x, n,i;

float sum=1.0;

printf("enter values of x and n");

scanf("%d %d", &x,&n);


if(n==1)

printf("sum= %lf", sum);

else
{

for (i=1;i<=n;i++)


sum=sum+(1.0*power(x,i))/fact(i)*1.0;

printf("Sum= %lf", sum);

}

return 0;

}





