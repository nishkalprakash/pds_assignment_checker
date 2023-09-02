//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>

int main(){
  int x=0;
  int y=0;

  printf("Enter the coordinates of the point P seperated be space:\n");
  scanf("%d %d", &x, &y);

  if(x == 0 && y == 0){
    printf("The point P(%d,%d) lies on both x-axis and y-axis i.e. P(%d,%d) is the origin.\n", x, y, x, y);
    return 0;
  }
  if(x != 0 && y == 0){
    printf("The point P(%d,%d) lies on the x-axis but not the y-axis.\n", x, y);
    return 0;
  }
  if(x == 0 && y != 0){
    printf("The point P(%d,%d) lies on the y-axis but not the x-axis.\n", x, y);
    return 0;
  }
  if(x > 0 && y > 0){
    printf("The point P(%d,%d) lies in the first quadrant.\n", x, y);
    return 0;
  }
  if(x < 0 && y > 0){
    printf("The point P(%d,%d) lies in the fourth quadrant.\n", x, y);
    return 0;
  }
  if(x < 0 && y < 0){
    printf("The point P(%d,%d) lies in the third quadrant.\n", x, y);
    return 0;
  }
  if(x > 0 && y < 0){
    printf("The point P(%d,%d) lies in the second quadrant.\n", x, y);
    return 0;
  }
}
