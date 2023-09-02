//Roll No: 23EC30056
//Name: Swaraj Dian

#include <stdio.h>
int main()
{
  int x=0,y=0; //Variable declaration for integers
  printf("Enter the co-ordinates of point p(x,y): ");
  scanf("%d%d",&x,&y);
  if (x==0)                 //Checking condition for x-axis
    printf("The point lies on y-axis");
  else if (y==0)            //Checking condition for y-axis
    printf("The point lies on x-axis");
  else if ((x>0)&&(y>0))    //Cheking condition for various quadrants
    printf("The point lies on 1st Quadrant");
  else if ((x>0)&&(y<0))
    printf("The point lies on 2nd Quadrant");
  else if ((x<0)&&(y<0))
    printf("The point lies on 3rd Quadrant");
  else if ((x<0)&&(y>0))
    printf("The point lies on 4th Quadrant");
  return 0;
}
  
