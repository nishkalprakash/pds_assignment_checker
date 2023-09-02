//Roll No - 23IM10028
//Name - Rishabh Dehariya

#include<stdio.h>

int main()
{
  int x,y;
  printf("Enter the x co-ordinate of point p:");
  scanf("%d", &x);

   printf("\nEnter the y co-ordinate of point p:");
  scanf("%d", &y);

  if(x==0 && y==0){
    printf("Point 'P' lies on origin");
  }

  if(x==0 && y!=0){
    printf("Point 'P' lies on y-axis");
  }

  if(x!=0 && y==0){
    printf("Point 'P' lies on x-axis");
  }

  if(x==0 && y==0){
    printf("Point 'P' lies on origin");
  }

  if(x>0 && y>0){
    printf("Point 'P' lies in First Quadrant");
  }

  if(x<0 && y>0){
    printf("Point 'P' lies in Second Quadrant");
  }

  if(x<0 && y<0){
    printf("Point 'P' lies in Third Quadrant");
  }

  if(x>0 && y<0){
    printf("Point 'P' lies in Fourth Quadrant");
  }

  return 0;
}
  
