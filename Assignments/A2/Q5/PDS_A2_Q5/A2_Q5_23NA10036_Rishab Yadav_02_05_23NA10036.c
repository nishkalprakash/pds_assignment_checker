//Roll number 23NA10036
#include<stdio.h>

int main(){

  int a, b, c, d;
  
  printf("Type the Bottom left coordinates of the rectangle:\n");
  scanf("%d %d",&a, &b);

  printf("Type the top right coordinates of the rectangle:\n");
  scanf("%d %d",&c, &d);

  printf("The area of the rectangle is: %d\n", (c-a)*(d-b));
  printf("The perimeter of the rectangle is: %d\n", ((c-a)*2) + ((d-b)*2));

  return 0;
}
