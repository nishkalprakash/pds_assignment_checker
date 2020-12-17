#include<stdio.h>

int main()
{
   int a,b,c,d;
  printf("Give coordinates for bottom left corner of rectangle: \n");
  scanf("%d%d",&a,&b);
  printf("Give coordinates for top right corner of rectangle: \n");
  scanf("%d%d",&c,&d);
  printf("The  corners of ABCD rectangle A(%d,%d),B(%d,%d),C(%d,%d),D(%d,%d)\n",a,b,c,b,c,d,a,d);

  int p,q;
  printf("Give a random coordinate: ");
  scanf("%d%d",&p,&q);

  if (p>a && c>p && q>b && d>q)
  printf("The coordinate is inside the rectangle\n");
  else
  printf(" The coordinate is not inside the rectangle\n");

}
