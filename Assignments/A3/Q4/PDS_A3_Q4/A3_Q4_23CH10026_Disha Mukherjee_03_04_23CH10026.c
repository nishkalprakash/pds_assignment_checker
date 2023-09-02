//Name:Disha Mukherjee
//Roll No:23CH10026

#include <stdio.h>

int main()
{
  int a,b,c,d,x,y;
  printf("enter bottom left coordinates\n");
  scanf("%d %d",&a,&b);
  printf("\n enter top right coordinates\n");
  scanf("%d %d",&c,&d);
  printf("\n enter coordinates to be checked\n");
  scanf("%d %d",&x,&y); 
  if (c<=a || d<=b)
    {
      printf("Ill formed rectangle\n");
      return 0;
    }
  else if (c>a && d>b)
    {
      if((x>a && x<c)&&(y>b && y<d))
	printf("p=(%d,%d) lies inside the rectangle\n",x,y);
      else if((x==a)&&(y>b && y<d))
	printf("p=(%d,%d) lies on left side of the rectangle\n",x,y);
      else if((y==b)&&(x>a && x<c))
	printf("p=(%d,%d) lies on bottom side of the rectangle\n",x,y);
      else if((y==d)&&(x>a && x<c))
	printf("p=(%d,%d) lies on top side of the rectangle\n",x,y);
      else if((x==c)&&(y>b && y<d))
	printf("p=(%d,%d) lies on right  side of the rectangle\n",x,y);
      else if(x==a && y==b)
	printf("p=(%d,%d) lies on bottom left corner of the rectangle\n",x,y);
      else if(x==a && y==d)
	printf("p=(%d,%d) lies on top left corner of the rectangle\n",x,y);
      else if(x==c && y==d)
	printf("p=(%d,%d) lies on top right corner of the rectangle\n",x,y);
      else if(x==c && y==b)
	printf("p=(%d,%d) lies on bottom right corner of the rectangle\n",x,y);
      else
	printf("p=(%d,%d) lies outside the rectangle\n",x,y);
    }
  return 0;
}
  

	
