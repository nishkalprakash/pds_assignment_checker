#include<stdio.h>

/*FUNCTION TO CALCULATE X RAISED TO THE POWER N*/

int power(int x ,int n)
{
int r = 1;
if(x == 1)
return x;

else {

int count = 1;
for (count = 1 ; count <= n ; count++)
r = r*x;
}
return r;
}

/*function to calculate n factorial*/

int fact(int n)
{int i,fac = 1;
for (i = 2; i <= n; i++)
fac  = fac * i;
return fac;
}

int main()
{
float sum = 1.0;
int j = 1,x,n;
printf("Drop the values of x and n respectively ");
scanf("%d%d",&x,&n);

/*for loop used for calculating the sum using the above mentioned functions*/

for (j = 1 ;j <= n;j++)
{
sum = sum + (float)(power(x,j))/fact(j);}
printf("Sum = %f",sum);
 return 0;}
