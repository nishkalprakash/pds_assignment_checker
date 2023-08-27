#include <stdio.h>

int main ()
{
  int a ,b, c , d ;
  printf("the coordinate (a,b) of the left corner of the rectangle\n");
scanf("%d %d", &a,&b);
printf("the coordinate (c,d) of the top right corner of the rectangle\n");
scanf("%d %d", &c,&d);
 printf("Area of the rectangle: %d\n", (c-a)*(d-b));
printf("Perimeter of the rectangle: %d\n", 2*((c-a)+(d-b)));
  
  return 0;
}
