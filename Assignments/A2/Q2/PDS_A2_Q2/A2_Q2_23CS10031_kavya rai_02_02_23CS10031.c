#include<stdio.h>
int main()
{
  int a,d;
  float b,c,e;
  e=0.0;
  printf("enter your age in months :");
  scanf("%d",&a);
  b=a/12.0;
  d=b;
  c=b-d;
  if(c>e)
    printf("\nThe person is %d years old\n", (d+1));
  else
    printf("\nThe person is %d years old\n", d);
  return 0;
}
    
  
  
