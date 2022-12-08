/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 5
* Description : Program to compute sum of first n term of series
*/
#include<stdio.h>

int power(int x, int n)
{
  int expo=1;
int j;
for(j=1; j<=n-1; j++)
{ 
expo= x*expo;
}
return expo;
}
 int fact(int n)
{
  int f=1;
  int i;
  for(i=1; i<=n-1; i++){
    f= f*i;
}
return f;
}
int main()
{
int x,n;
  printf("enter two numbers x and n: ");
  scanf("%d",&x);
  scanf("%d",&n);
  float sum=1.0;
float num;
int k;
  for(k=1; k<=n-1; k++){
  num= power(x,k)/fact(k);
  sum = sum+num;
}
printf("sum of series: %f", sum);
return 0;
}
  

