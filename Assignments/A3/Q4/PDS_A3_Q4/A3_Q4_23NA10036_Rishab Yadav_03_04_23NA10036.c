// Roll no - 23NA10036
// Rishab Yadav

#include <stdio.h>

int main(){

  int a, b, c, d, x, y;

  printf("Enter the bottom-left coordinates (a,b):\n");
  scanf("%d %d", &a, &b);

  printf("Enter the top-right coordinates (c,d):\n");
  scanf("%d %d", &c, &d);

  if(a>c || b>d){
    printf("ILL formed rectangle.\n");
    return 0;
  }

  printf("Enter coordinates of point P(x, y):\n");
  scanf("%d %d", &x, &y);

  if((x>a && x<c) && y == d){
    printf("p = (%d,%d) lies on top side of the rectangle.\n", x, y);
  }

  else if((x>a && x<c) && y == b){
    printf("p = (%d,%d) lies on bottom side of the rectangle.\n", x, y);
  }

  else if((y>b && y<d) && x == a){
    printf("p = (%d,%d) lies on left side of the rectangle.\n", x, y);
  }

  else if((y>b && y<d) && x == c){
    printf("p = (%d,%d) lies on right side of the rectangle.\n", x, y);
  }

  else if(x==a && y == b){
    printf("p = (%d,%d) lies on bottom left corner of the rectangle.\n", x, y);
  }
  
  else if(x==a && y == d){
    printf("p = (%d,%d) lies on top left corner of the rectangle.\n", x, y);
  }

  else if(x==c && y == d){
    printf("p = (%d,%d) lies on top right corner of the rectangle.\n", x, y);
  }

  else if(x==c && y == b){
    printf("p = (%d,%d) lies on bottom right corner of the rectangle.\n", x, y);
  }

  else if((x>a && x<c) && (y>b && y<d)){
    printf("Point p = (%d,%d) lies inside the rectangle.\n", x, y);
  }

  else{
    printf("Point p = (%d,%d) lies outside the reactangle.\n", x, y);
  }

  return 0;
}
