#include<stdio.h>
int main(){
  int x,y;
  printf("Enter the values of x and y");
  scanf("%d %d",&x,&y);
  if (x==0&&y!=0){
    printf("The point p is on y axis");
  }
  else if (x!=0&&y==0){
    printf("The point p is on x axis");
  }
  else if (x>0&&y>0){
    printf("The point p is in first quadrant");
  }
  else if (x<0&&y>0){
    printf("The point p is in second quadrant");
  }
  else if (x<0&&y<0){
    printf("The point p is in third quadrant");
  }
  else if (x>0&&y<0){
    printf("The point p is in fourth quadrant");
  }
  return 0;
}
