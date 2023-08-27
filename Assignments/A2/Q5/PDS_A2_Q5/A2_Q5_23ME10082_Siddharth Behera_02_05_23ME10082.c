#include<stdio.h>
void main()
{
  int a,b,c,d;
  int area,perim;
  float p,q;
  printf("enter the (a,b) coordinate=");
  scanf("%d,%d",&a,&b);
  printf("enter the (c,d) coordinates=");
  scanf("%d,%d",&c,&d);
  
  area=((c-a)*(d-b));
  perim=2*((c-a)+(d-b));
  
  printf("the area=%d\n",area);
  printf("the perimeter=%d\n",perim);

  p=(c+d)/2;
  q=(b+d)/2;
  
  printf("the coordinates is=(%f,%f)\n",p,q);
}

  
