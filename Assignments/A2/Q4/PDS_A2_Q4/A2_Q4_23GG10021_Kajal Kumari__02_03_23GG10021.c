#include<stdio.h>
int main();
{
int m;
int n;
printf(" enter two numbers m and n ");
scanf(" %d%d/n" ,&m,&n);
printf(" the sum =%d/n", m+n);
printf(" the difference =%d/n",m-n);
printf(" the product =%d/n", m*n);
printf(" the integer quotient=%d/n",m/n);
printf(" the integer remainder=%d/n",m%n);
printf(" the floating point quotient =%d/n",m/n);
printf(" the sum of the squares =%d/n",m^2+n^2);
printf(" the square of the sum =%d/n",(m+n)^2);
printf(" the average =%f/n",( m+n)/2);
printf(" the average of the sum of the squares=%f/n",( m^2+n^2)/2);


 return 0;
}