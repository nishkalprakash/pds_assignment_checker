#include <stdio.h>
int main()
{
  int x1,y1,x2,y2,x,y;
  printf("Enter the coordinates of bottom left corner of the rectangle: \n");
  scanf("%d%d",&x1,&y1);
  printf("Enter the coordinates of top right corner of the rectangle: \n");
  scanf("%d%d",&x2,&y2);
  if((x2>x1)&&(y2>y1))
    {
      printf("Enter the a point\n");
      scanf("%d%d",&x,&y);
      if(((x<=x2)&&(x>=x1))&&((y<=y2)&&(y>=y1)))
	{
	  printf("The point lies inside rectangle\n");
	  if((x==x1)&&(y==y1))
	      printf("The point lies on left bottom corner\n");
	  else if((x==x2)&&(y==y2))
	    printf("The point lies on top right corner\n");
	  else if((x==x1)&&(y==y2))
	    printf("The point lies on top left corner \n");
	  else if((x==x2)&&(y==y1))
	    printf("The point lies on bottom right corner\n");
	  else if((x==x1)&&((y<=y2)&&(y>=y1)))
			 printf("The point lies on left side of rectangle\n");
	  else if((x==x2)&&((y<=y2)&&(y>=y1)))
			 printf("The point lies on right side of rectangle\n");
	  else if(((x<=x2)&&(x>=x1))&&(y==y1))
			 printf("The point lies on bottom side of rectangle\n");
	  else if(((x<=x2)&&(x>=x1))&&(y==y2))
			 printf("The point lies on top side of rectangle\n");
	}
      else
	printf("The point lies outside the rectangle\n");
    }
  else
    printf("Ill formed rectangle\n");
	  return 0;
	}
  
