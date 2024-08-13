//to read the input integer from the user in an integer variable n 
//Amartiya kakodiya
//Roll no:24NA10013
#include <stdio.h>
int main()
{
  int n;
  printf("enter the integer:");
  scanf("%d",&n);
  printf("the value of the variable n=%d",n);
  int a,S1;
  a=n*(n+1);
  S1=a/2;
  printf("the value of S1=%d",S1);
  int b,S2;
  b=n*(n+1)*(2*n+1);
  S2=b/6;
  printf("the value of S2=%d",S2);
  int S3,c,d,e,f;
  c=n/100;
  d=c%100;
  e=d/10;
  f=e%10;
  S3=c+e+f;
  printf("the value of S3=%d",S3);
  return 0;
}
   
