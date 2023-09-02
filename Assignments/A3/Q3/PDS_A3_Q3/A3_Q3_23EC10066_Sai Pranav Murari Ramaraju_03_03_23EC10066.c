#include<stdio.h>
int main(){
  int x,y;
  printf("enter the coordinates of p :");
  scanf("%d%d",&x,&y);
  if(x>0&&y==0){
    printf("the point lies on x-axis");
  }
  else if(x==0&&y>0){
    printf("the point lies on y-axis");
  }
  else if(x>0&&y>0){
    printf("the point lies on 1st quadrant");
  }
  else if(x<0&&y>0){
    printf("the point lies on 2nd quadrant");
  }
  else if (x<0&&y<0){
    printf("the point lies on 3rd quadrant");
  }
  else{
    printf("the point lies on 4th quadrant");
  }

  return 0;

}
