//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include <stdio.h>
int main()
{
  float x,y;
  printf("Enter the coordinates x and y respectively\n");
  scanf("%f%f",&x,&y);
  if(x==0 && y!=0)
    printf("It is on Y axis\n");
  if(x>0 && y>0)
    printf("It is in quadrant 1\n");
  if(x<0 && y>0)
    printf("It is in quadrant 4\n");
  if(x>0 && y<0)
    printf("It is in quadrant 2\n");
  if(x<0 && y<0)
    printf("It is in quadrant 3\n");
  if(y==0 && x!=0)
    printf("It is on X axis\n");
  if(x==0 && y==0)
    printf("It is on both x and y axis\n");
  return 0;
}
  
  
  
