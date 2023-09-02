//ROLL NO.:23BT30019
//NAME:NAZEER ANWAR

#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the coordinate of the point");
  scanf("%d%d" ,&x,&y);

  if(x==0)
    printf("point is in Y-AXIS");
  else if(y==0)
    printf("point is in X-AXIS");
  else
    {
      if(x>0 && y>0)
	printf("point is in 1st quad ");
      if(x>0 && y<0)
	printf("point is in 4th quad");
      if(x<0 && y<0)
	printf("point is in 3rd quad");
      if(x<0 && y>0)
	printf("point is in 2nd quad");

    }
}


	
