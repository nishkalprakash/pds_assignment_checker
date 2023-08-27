#include<stdio.h>
int main()
{
  int p,t;
  float r,SI;
  printf("Enter the amount in SI\n");
  scanf("%d%f%d", &p,&r,&t);
  SI=p*r*t/100;
  printf("Total amount %f", SI);
  return 0;
}
