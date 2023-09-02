//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
int main(){
  // defining that cordinates x and y are the integers
  int x,y;
  printf("Enter the coordinates of the point:");//user display
  scanf("%d %d", &x, &y);//user  input
  //seprating the cases for the respective quadrants
  if ( x>0 && y>0){
    printf("Point lies in 1st quadrant\n");
  }
  else if ( x<0 && y>0){
    printf("Point lies in 2nd quadrant\n");
  }
  else if ( x<0 && y<0){
    printf("Point lies in 3rd quadrant\n");
  }
  else if ( x>0 && y<0){
    printf("Point lies in 4th quadrant\n");
   
  }
  //condition for point lying on axis
  else if ( x==0 && y!=0){
    printf("Point lies on y-axis\n");
  }
  else if ( y==0 && x!=0){
    printf("Point lies on x-axis\n");
  }
  //special case for origin
  if(x==0 && y==0){
    printf("Point lies on both the axis it is origin\n");
  }
  return 0;
}
   
