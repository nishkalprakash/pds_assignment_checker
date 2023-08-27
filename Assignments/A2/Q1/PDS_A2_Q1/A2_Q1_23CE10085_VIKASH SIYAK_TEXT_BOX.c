//Lab 2
//assignment 2
//roll no: 23CE10085

#include<stdio.h>
int main()
{
  float y;
  printf("Enter a float number:");
  scanf("%f",&y);
  int p;
  float q;
  p = (int)y;
  q = y-p;
  printf("%d\n",p);
  printf("%f\n",q);
return 0;
}