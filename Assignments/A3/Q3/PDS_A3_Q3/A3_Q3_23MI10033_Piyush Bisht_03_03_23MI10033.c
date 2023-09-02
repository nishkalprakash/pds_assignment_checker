//Roll No.:23MI10033
//Name: Piyush Bisht

#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter the coordinates of point p ");
  scanf("%d %d", &x, &y);
  if ((x==0) && (y==0)){
    printf("\nPoint lies at origin");
  }
  else if (x==0){
    printf("\nPoint lies in y axis");
  }
  else if (y==0){
    printf("\nPoint lies in x axis");
  }
  else if ((x>0) && (y>0)){
    printf("\nPoint lies in quadrant 1");
  }
  else if ((x>0) && (y<0)){
    printf("\nPoint lies in quadrant 2");
  }
  else if ((x<0) && (y<0)){
    printf("\nPoint lies in quadrant 3");
  }
  else if ((x<0) && (y>0)){
    printf("\nPoint lies in quadrant 4");
  }
  return 0;
}
    
