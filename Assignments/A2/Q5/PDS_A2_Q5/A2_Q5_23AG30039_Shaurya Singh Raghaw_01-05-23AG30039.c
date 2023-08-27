#include<stdio.h>
int main()
{
  int a,b,c,d,area,perimeter;
  float p,q;
  printf("coordinate of the bottom left corner is:\n");
  scanf("%d%d",&a,&b);
  printf("coordinate of top right corner is\n");
  scanf("%d%d",&c,&d);

  area = (c-a)*(d-b);
  printf("area of the rectangle is:%d\n",area);

  perimeter = (c+d)-(a+b);
  printf("perimeter of the rectangle is:%d\n", perimeter);

  p=(a+c)/2;
  q=(b+d)/2;
  printf("coordinates of diagonal intersection:%f%f",p,q);

  return 0;

}

  
  
  
