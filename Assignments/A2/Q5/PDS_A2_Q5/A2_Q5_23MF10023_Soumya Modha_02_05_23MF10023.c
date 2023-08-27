#include<stdio.h>
int main()

{
  int a,b,c,d, area, perim;

  printf("enter coordinates of bottom left is (a,b)");
  scanf("%d%d",&a,&b);

  printf("enter coordinates of top right is (c,d)");
  scanf("%d%d",&c,&d);
  area = (c-a)*(d-b);
  perim = 2*((c-a)+(d-b));


  printf("the area of the rectangle is %d \n");
  printf("the perimeter of the rectangle is %d \n");

}
 
