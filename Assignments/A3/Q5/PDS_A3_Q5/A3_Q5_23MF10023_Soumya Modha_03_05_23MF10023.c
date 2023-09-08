//roll no: 23MF10023
//name : Modha Soumya Vahini

#include<stdio.h>
int main()
{
  int r,s,t,u,v,w;
  printf("enter the co-efficient of x^5\n");
  scanf("%d",&r);
  printf("enter the co-efficient of x^4\n");
  scanf("%d",&s);
printf("enter the co-efficient of x^3\n");
scanf("%d",&t);
  printf("enter the co-efficient of x^2\n");
  scanf("%d",&u);
  printf("enter the co-efficient of x^1\n");
  scanf("%d",&v);
  printf("enter the co-eficient of x^0\n");
  scanf("%d",&w);

  printf("polynomial = %d*x^5+%d*x^4+%d*x^3+%d*x^2+%d*x^1+%d\n" ,r,s,t,u,v,w);
  printf("derivative = 5*%d*x^4+4*%d*x^3+3*%d*x^2+2*%d*x^1+%d\n",r,s,t,u,v);

  return 0;
}
  
