#include<stdio.h>

int main()
{
  int n,S1,S2,S3;
  printf("enter n=\n");
  scanf("%d",&n);
  S1 = (n*(n+1))/2;
  S2 = (n*(n+1)*(2*n+1)/6);
  int a,b,c;
  a = n%100;
  b=((n/10)%10);
  c=n%10;
  S3 = a+b+c;
  printf("S1=%d\n",S1);
  printf("S2=%d\n",S2);
  printf("S3=%d\n",S3);

}
