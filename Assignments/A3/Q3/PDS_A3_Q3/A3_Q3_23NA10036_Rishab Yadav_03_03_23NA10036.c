// Roll no - 23NA10036
// Rishab Yadav

#include <stdio.h>

int main(){

  int  x,y;
  
  printf("Enter coordinates of the point P(x,y):\n");
  scanf("%d %d", &x, &y);

  if(x == 0 && y!=0){
    printf("Point P lies on y-axis.\n");
  }

  if(x!=0 && y == 0){
    printf("Point P lies on x-axis.\n");
  }

  if(x == 0 && y == 0){
    printf("Point P is origin.\n");
  }

  if(x>0 && y>0){
    printf("Point P lies in 1st quadrant.\n");
  }

  if(x>0 && y<0){
    printf("Point P lies in 2nd quadrant.\n");
  }

  if(x<0 && y<0){
    printf("Point P lies in 3rd quadrant.\n");
  }

  if(x<0 && y>0){
    printf("Point P lies in 4th quadrant.\n");
  }
  

  return 0;
}
