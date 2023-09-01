#include<stdio.h>
int main()
{
  int a,b,c,d,area,perim;
  float p,q;
  printf("enter 2 nos ");
  scanf("%d%d",&a,&b);
  printf("ener 2 nos ");
  scanf("%d%d",&c,&d);
  printf("the area and perimeter (a,b) and (c,d) is :%d%d",(c-a)*(d-b),2*((c-a)+(d-b)));
  printf("the coordinates of point of intersection of diagonals (p,q) is:%f%f",(a+c)/2.0,(b+d)/2.0);
  return 0;
}
