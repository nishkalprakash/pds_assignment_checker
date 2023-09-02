//Roll no: 23HS10010
//Name: Anurag Pokhariyal
#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter the coordinates of the point p(x,y):\n");
  scanf("%d %d",&x,&y);
  if (x == 0 && y != 0){
    printf("The point p is on y-axis\n");
  }
  else if (y == 0 && x!= 0){
    printf("The point p is on x-axis\n");
  }
  else if(x == 0 && y == 0){
    printf("The point p is on origin\n");
  }
  else if (x > 0){
    if (y>0){
      printf("The point p is in 1st Quadrant\n");
    }
    else if (y < 0){
      printf("The point p is on 2nd Quadrant\n");
    }
  }
  else if (x < 0){
    if (y > 0){
      printf("The point p is in 4th Quadrant\n");
    }
    else if (y < 0){
      printf("The point p is in 3rd Quadrant\n");
    }
  }
  return 0;
}
