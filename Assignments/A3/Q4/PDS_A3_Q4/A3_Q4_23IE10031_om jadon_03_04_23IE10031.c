// Roll no. - 23IE10031
// Name - Om singh Jadon

#include <stdio.h>

int main()
{
  int a,b,c,d;
  printf("Coordinates of Bottom Left Corner: ");
  scanf("%d %d", &a, &b);
  printf("Coordinates of Top Right  Corner: ");
  scanf("%d %d", &c, &d);

  if (a>=c || b>=d)
    {
      printf("Ill Formed Rectangle.\n");
      return 0;
    }

  int x,y;
  printf("Coordinates of Point P: ");
  scanf("%d %d", &x, &y);

  if(x==a)
    {
      if(y==b) printf("p = (%d, %d) lies on the bottom left corner of the rectangle.", x,y);
      else if (y==d) printf("p = (%d, %d) lies on the top left corner of the rectangle.", x,y);
      else if (y>b && y<d) printf("p = (%d, %d) lies on the left side of the rectangle.", x,y);
    }
    
  else if(x==c)
    {
      if(y==b) printf("p = (%d, %d) lies on the bottom right corner of the rectangle.", x,y);
      else if (y==d) printf("p = (%d, %d) lies on the top right corner of the rectangle.", x,y);
      else if (y>b && y<d) printf("p = (%d, %d) lies on the right side of the rectangle.", x,y);
    }
  else if(y==b && x>a && x<c) printf("p = (%d, %d) lies on the bottom side of the rectangle.", x,y);
  else if(y==d && x>a && x<c) printf("p = (%d, %d) lies on the top side of the rectangle.", x,y);
  else if(x>a && x<c && y>b && y<d) printf("p = (%d, %d) lies inside the rectangle.", x,y);
  else printf("p = (%d, %d) lies outside the rectangle.", x,y);
  printf("\n");

  return 0;
		     
}
