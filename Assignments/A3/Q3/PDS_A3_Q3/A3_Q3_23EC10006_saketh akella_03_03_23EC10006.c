#include<stdio.h>

int main(){
  float x,y;
  printf("this program is to tell whether the given point lies on x axis or y axis of one of the 4 Quadrants \n");
  printf("enter the two coordinates(x,y) \n");
  scanf("%f%f",&x,&y);
  if(x>0&&y>0) printf("lies in the 1 quadrant \n");
  else if(x>0&&y<0) printf("lies in the 2 quadrant \n");
  else if(x<0&&y<0) printf("lies in the 3 quadrant \n");
  else if(x<0&&y>0)printf("lies in the 4 quadrant \n");
   else if(x==0&&y==0)printf("its origin \n");
  else if(x==0)printf("lies on the y-axis \n");
  else if(y==0)printf("lies on the x-axis \n");
 
  else printf("invalid input \n");
  return 0;

} 
