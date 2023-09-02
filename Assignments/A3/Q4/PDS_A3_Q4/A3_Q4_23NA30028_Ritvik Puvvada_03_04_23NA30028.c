//Roll No: 23NA30028//
//Name: Ritvik Puvvada//

#include<stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("Enter the co-ordinates of bottom left corner");
  scanf("%d,%d",&a,&b);
  printf("Enter the co-ordinates of top right corner");
  scanf("%d,%d",&c,&d);
  printf("Enter the co-ordinates of a point p");
  scanf("%d,%d",&x,&y);
  printf("The points: %d, %d, %d, %d, %d, %d\n", a, b, c, d,x, y);
  if (c>a && d>b)
    {
      if (c>x && x>a && d>y && y>b)
	printf("p=(%d,%d) lies inside the rectangle\n",x,y);
      else if(c>x && x>a && y==b)
	printf("p=(%d,%d) lies on botttom side of the rectangle\n",x,y);
      else if(c>x && x>a && y==d)
	printf("p=(%d,%d) lies on top side of the rectangle\n",x,y);
      else if(x==a && d>y && y>b )
	printf("p=(%d,%d) lies on left side of the rectangle\n",x,y);
      else if(x==c && d>y && y>b)
     	printf("p=(%d,%d) lies on right side of the rectangle\n",x,y);
      else if(x==a && y==b)
        printf("p=(%d,%d) lies on bottom left corner of the rectangle\n",x,y);
      else if(x==c && y==d)
	printf("p=(%d,%d) lies on top right corner of the rectangle\n",x,y);
      else if(x==c && y==b)
	printf("p=(%d,%d) lies on bottom right corner of the rectangle\n",x,y);
      else if(x==a && y==d)
	printf("p=(%d,%d) lies on top left corner of the rectangle\n",x,y);
      else
	printf("p=(%d,%d) lies outside the rectangle\n",x,y);
    }
  else
    printf("Ill formed rectangle\n");
  return 0;
}
  
	
	
      
      
  
