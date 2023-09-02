//Roll No. 23EX10024
//Name Nishant Kumar
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the x and y coordinates\n");
  scanf("%d %d", &x, &y);
  if (x==0 && y==0){
    printf("The point is origin\n");
  }
  else if (x==0 && y!=0){
    printf("The point lies on y axis\n");
  }
  else if (x!=0 && y==0){
    printf("The point lies on x axis\n");
  }
  else if (x>0 && y>0){
    printf("The point lies in first quadrant\n");
  }
  else if (x<0 && y>0){
    printf("The point lies in second quadrant\n");
  }
  else if (x<0 && y<0){
    printf("The point lies in third quadrant\n");
  }
  else {
    printf("The point lies in fourth quadrant\n");
  }
  return 0;
}
    
