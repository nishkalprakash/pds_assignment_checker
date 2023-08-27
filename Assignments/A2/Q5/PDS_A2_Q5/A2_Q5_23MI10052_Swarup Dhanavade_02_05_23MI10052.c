#include<stdio.h>
int main()
{ int a,b,c,d;
  float p,q;
  int l1,l2;
  printf("Enter the coordinates of bottom left corner(keep space between them):");
  scanf("%d %d",&a, &b);
  printf("Enter the coordinates of top right  corner(keep space between them):");
  scanf("%d %d",&c,&d);
  if (c>a) l1=c-a;
  else l1=a-c;
  if (d>b)l2=d-b;
  else l2=b-d;
  int area , perim;
  area= l1*l2;
  perim=2*(l1+l2);
  
  
  printf("Area of rectangle=%d\n Perimeter =%d\n",area,perim);
  return 0;
}
